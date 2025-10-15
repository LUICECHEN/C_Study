package Annotation;

import java.lang.reflect.Method;

public class LogProcessor {
  public static void process(Object service) throws Exception{
      //获取类中所有方法
      Method[] methods = service.getClass().getMethods();
      for (Method method : methods) {
          //判断方法是否被@Log注解标记
          if (method.isAnnotationPresent(Log.class)){
              //获取注解实例
              Log logAnnotation = method.getAnnotation(Log.class);
              //读取注解成员值并处理,形式类似于方法调用(     "对象.注解成员名.()"    )
              System.out.println("日志内容: " + logAnnotation.value());
              System.out.println("日志类型: " + logAnnotation.type());
          }
      }
  }

    public static void main(String[] args) throws Exception {
        process(new UserService());
        //输出：
        //日志内容: 查询用户
        //日志类型: 1
    }
}
