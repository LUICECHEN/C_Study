package clone;

public class Person implements Cloneable{
    private Address address;

    public Person(Address address) {
        this.address = address;
    }

    public Address getAddress() {
        return address;
    }

    public void setAddress(Address address) {
        this.address = address;
    }

    @Override
    protected Person clone() throws CloneNotSupportedException {
        Person person = (Person)super.clone();
        //添加一下语句表示深拷贝,深拷贝指的是创建一个新的对象，
        //而浅拷贝则是会直接复制内部对象的引用(即浅拷贝成员变量的引用会相同)
        //基本数据类型则
        person.setAddress(person.getAddress().clone());
        return person;
    }
}
