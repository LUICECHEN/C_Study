package InputAndOutput;

import java.io.FileInputStream;
import java.io.IOException;
import java.io.InputStream;

public class UseFileInputStream {
    public static void main(String[] args) {
        try(InputStream fis = new FileInputStream("D://ccc//c.txt")){
            //将文本的内容先存储到字节数组中,如果是文本内容的话Reader更方便,但InputStream更加通用
            byte[] text = new byte[4096];
            int context;
            int i = 0;
            while ((context = fis.read()) != -1){
                //System.out.println((char) context);
                text[i] = (byte) context;
                ++i;
            }
            //通过String的构造方法指定编码方式，即可输出正确的文本
            String txt = new String(text, "UTF-8");
            System.out.println(txt);
        }catch (IOException e) {
            throw new RuntimeException(e);
        }
    }
}
