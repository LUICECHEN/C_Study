package cglib;

public class Driver {
    public static void main(String[] args) {
        AliSmsService proxy = (AliSmsService)CglibProxyFactory.getProxy(AliSmsService.class);
        proxy.send("hello world!");

    }
}
