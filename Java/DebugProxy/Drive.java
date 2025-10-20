package DebugProxy;

import DebugProxy.impl.SmsServiceImpl;

public class Drive {
    public static void main(String[] args) {
        SmsService service = (SmsService)JdkProxyFactory.getProxy(new SmsServiceImpl());
        service.send("java");
    }

}
