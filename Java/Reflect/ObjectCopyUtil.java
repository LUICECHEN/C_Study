package Reflect;

import java.lang.reflect.Field;
import java.lang.reflect.InvocationTargetException;

public class ObjectCopyUtil {
    //浅拷贝，仅拷贝基本数据类型和引用地址
    public static <T> T copy(Object obj, Class<T> targetClass) throws NoSuchMethodException, InvocationTargetException, InstantiationException, IllegalAccessException {
        if (obj == null) return null;
        T target = targetClass.getConstructor().newInstance();
        Field[] fields = obj.getClass().getDeclaredFields();

        for (Field field : fields) {
            field.setAccessible(true);
            String fieldName = field.getName();
            Object fieldValue = field.get(obj);

            try {
                Field targetField = targetClass.getDeclaredField(fieldName);
                targetField.setAccessible(true);
                targetField.set(target, fieldValue);
            } catch (NoSuchFieldException e) {
                //目标对象无此字段抛出异常
                throw new RuntimeException(e);
            }
        }
        return target;
    }
}
