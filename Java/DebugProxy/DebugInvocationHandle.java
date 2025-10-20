package DebugProxy;

import java.lang.reflect.InvocationHandler;
import java.lang.reflect.Method;

public class DebugInvocationHandle implements InvocationHandler {

    private final Object target;

    public DebugInvocationHandle(Object target){
        this.target = target;
    }
    @Override
    public Object invoke(Object proxy, Method method, Object[] args) throws Throwable {
        //调用方法前
        System.out.println("before send()");
        //使用方法对象调用方法
        Object result = method.invoke(proxy, args);
        //调用方法后
        System.out.println("after send()");
        return result;

    }
}
