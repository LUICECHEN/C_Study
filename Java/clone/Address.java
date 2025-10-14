package clone;

public class Address implements Cloneable{
    private String name;

    @Override
    protected Address clone() throws CloneNotSupportedException {
        return (Address)super.clone();
    }

    public Address(String name) {
        this.name = name;
    }

    public String getName() {
        return name;
    }

    public void setName(String name) {
        this.name = name;
    }
}
