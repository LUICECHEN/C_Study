package ThreadLocal;

import java.text.SimpleDateFormat;
import java.util.Date;

/**
 * 为一些线程不安全的类(SimpleDateFormat,Random),通过ThreadLocal为每个线程创建独立实例
 * 避免同步锁的开销
 */
public class DateUtil {
    private static ThreadLocal<SimpleDateFormat> SDF = ThreadLocal.withInitial(
            ()-> new SimpleDateFormat("yyyy-MM-dd HH:mm:ss"));

    public static String format(Date date){
        return SDF.get().format(date);  //每个线程使用自己的实例
    }

    // 用完清理（可选，线程结束后会自动回收，但显式清理更安全）
    public static void remove() {
        SDF.remove();
    }
}
