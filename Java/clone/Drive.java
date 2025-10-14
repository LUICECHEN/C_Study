package clone;

public class Drive {
    public static void main(String[] args) throws CloneNotSupportedException {
        Person person1 = new Person(new Address("武汉"));
        Person person1Copy = person1.clone();
        // false
        System.out.println(person1.getAddress() == person1Copy.getAddress());
    }
}
