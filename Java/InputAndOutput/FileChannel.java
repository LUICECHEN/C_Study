package InputAndOutput;

import java.io.IOException;
import java.io.RandomAccessFile;
import java.nio.ByteBuffer;
import java.nio.CharBuffer;


public class FileChannel {
    public static void main(String[] args) throws IOException {
        RandomAccessFile reader = new RandomAccessFile("D://ccc//c.txt", "r");
        java.nio.channels.FileChannel channel = reader.getChannel();
        ByteBuffer buffer = ByteBuffer.allocate(1024);
        channel.read(buffer);

        while(buffer.hasRemaining()){
            System.out.print(buffer.get());
        }
    }
}
