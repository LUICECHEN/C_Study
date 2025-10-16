package ThreadLocal;

/**
 * 每个线程都会有一个自己的ThreadLocalMap(类似于HashMap),
 * 键对应的是每一个ThreadLocal对象，而值则对应的是该ThreadLocal对象存储的信息
 *
 */
public class RequestContext {
    private static ThreadLocal<Long> USER_ID = new ThreadLocal<>();

    // 定义 ThreadLocal 存储当前请求的用户 ID
    public static void setUserId(Long id){
        USER_ID.set(id);
    }

    // 获取当前线程的用户 ID（任意层级的代码都能获取）
    public static Long getUserId(){
        return USER_ID.get();
    }

    // 请求结束后清理（重要！）
    public static void remove(){
        USER_ID.remove();
    }
}
