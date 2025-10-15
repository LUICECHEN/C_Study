package Annotation;

import java.lang.annotation.ElementType;
import java.lang.annotation.Retention;
import java.lang.annotation.RetentionPolicy;
import java.lang.annotation.Target;

/**
 * 注解的定义，使用，通过反射获取注解内容，
 * 注解类是用来描述类，方法，字段的类，
 * 每个成员是用  无参的方法( String value() )  结构定义，使用时也要用对象调用的方式
 * 为类，方法，字段添加元数据，可通过反射获取Method对象，然后获取注解对象，再获取信息
 */

//元注解：指定注解保留到运行时(可通过反射读取)
@Retention(RetentionPolicy.RUNTIME)
//元注解：指定注解可用于标记方法
@Target(ElementType.METHOD)
//定义注解
public @interface Log {
    //注解的成员（类似方法，可指定默认值）
    String value() default"操作日志";
    int type() default 0;
}
