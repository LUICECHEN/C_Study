package InputAndOutput;

import java.io.FileReader;
import java.io.IOException;

public class UseFileReader {
    public static void main(String[] args) {
        try (FileReader fileReader = new FileReader("D://ccc//c.txt")) {
            int context;
            long bytes = fileReader.skip(3);
            System.out.println("实际跳过 " + bytes + " 字节");
            while ((context = fileReader.read()) != -1) {
                System.out.print((char) context);
            }

        } catch (IOException e) {
            throw new RuntimeException(e);
        }
    }
}