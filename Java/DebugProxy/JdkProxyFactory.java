package DebugProxy;

import java.lang.reflect.Proxy;

public class JdkProxyFactory {
    public static Object getProxy(Object target){
        Object proxyInstance = Proxy.newProxyInstance(
                target.getClass().getClassLoader(), //获取被代理类的类加载器
                target.getClass().getInterfaces(),  //获取被代理类的所有接口，可能不止一个
                new DebugInvocationHandle(target)   //代理对象对应的自定义 InvocationHandler
        );
        return proxyInstance;
    }
}
