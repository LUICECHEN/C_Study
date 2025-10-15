package Annotation;

public class UserService {


    //使用自定义@Log注解标记方法
    @Log(value = "查询用户", type = 1)
    public User getUser(int id){
        return new User(id, "张三");


    }
    //使用JDK内置的@Override注解
    @Override
    public String toString() {
        return super.toString();
    }
}
