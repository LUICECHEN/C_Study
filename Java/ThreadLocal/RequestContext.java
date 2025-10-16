package ThreadLocal;

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
