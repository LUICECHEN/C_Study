package cglib;

public class AliSmsService {
    public String send(String message){
        System.out.println("发送信息: " + message);
        return message;
    }
}
