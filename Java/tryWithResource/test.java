package tryWithResource;

import java.io.File;
import java.util.Scanner;

/**
 * 使用try-with-resource替换传统的try-catch-finally语句
 * 优点：1.简化这种结构的写法,原来的try-finally语句会存在嵌套tr-catch的情况
 *      2.不会覆盖try里的异常信息，传统的会把finally里的异常信息覆盖try的
 *
 * 关闭顺序：先写后释放(栈)
 *
 */
public class test {

    public static void main(String[] args) {
        /*//传统写法(比较臃肿)
        Scanner scanner = null;
        try {
            scanner = new Scanner((new File("D://ccc//c.txt")));
            while (scanner.hasNext()){
                System.out.println(scanner.next());
            }
        }catch(Exception e){
            e.printStackTrace();
        }finally{
            if (scanner != null)
                scanner.close();
        }*/

        //新写法(鲜明对比)
        try(Scanner scanner = new Scanner(new File("D://ccc//c.txt"))){
            while (scanner.hasNext()){
                System.out.println(scanner.next());
            }
        }catch (Exception e){
            e.printStackTrace();
        }
    }


}
