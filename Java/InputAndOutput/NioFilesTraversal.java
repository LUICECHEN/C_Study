package InputAndOutput;

import java.io.IOException;
import java.nio.file.Files;
import java.nio.file.Path;
import java.nio.file.Paths;
import java.util.stream.Stream;

public class NioFilesTraversal {
    public static void traverseSingleThread(String diretoryPath){
        Path rootPath = Paths.get(diretoryPath);
        if (!Files.exists(rootPath)|| !Files.isDirectory(rootPath)){
            System.out.println("无效目录: " + diretoryPath);
            return;
        }

        try(Stream<Path> pathStream = Files.walk(rootPath)){
            pathStream.forEach( path->{
                if (Files.isDirectory(path)){
                    System.out.println("文件夹: " + path.toAbsolutePath());
                }else{
                    System.out.println("文件: " + path.toAbsolutePath());
                }
            });

        }catch (IOException e){
            e.printStackTrace();
        }
    }

    public static void traverseParallel(String diretoryPath){
        Path rootPath = Paths.get(diretoryPath);
        if (!Files.exists(rootPath)||!Files.isDirectory(rootPath)){
            System.out.println("无效目录: " + diretoryPath);
            return;
        }

        try(Stream<Path> pathStream = Files.walk(rootPath).parallel()){
            pathStream.forEach(path->{
                if(Files.isDirectory(path)){
                    System.out.println("文件夹: " + path.toAbsolutePath());
                }else{
                    System.out.println("文件: " + path.toAbsolutePath());
                }
            });

        }catch(IOException e){
            e.printStackTrace();
        }
    }

    public static void main(String[] args) {
        long start = System.currentTimeMillis();
        traverseSingleThread("D://Tomcat_9");
        long end = System.currentTimeMillis();
        System.out.println("串行遍历花费时间: " + (end - start) + "ms");

        start = System.currentTimeMillis();
        traverseParallel("D://Tomcat_9");
        end = System.currentTimeMillis();
        System.out.println("串行遍历花费时间: " + (end - start) + "ms");

    }
}
