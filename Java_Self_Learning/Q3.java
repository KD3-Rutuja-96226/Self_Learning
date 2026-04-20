

public class Q3 {
    public static void main(String[] args) {

        // Original Object
        Address addr = new Address("Pune", "Maharashtra");
        Student s1 = new Student(1, "Rahul", 85.5, addr);

        // Shallow Copy
        Student s2 = new Student(s1);

        // Deep Copy
        Student s3 = s1.deepCopy();

        System.out.println("Before modification:");
        System.out.println("Original: " + s1);
        System.out.println("Shallow Copy: " + s2);
        System.out.println("Deep Copy: " + s3);

        // Modify Address
        s1.getAddress().setCity("Mumbai");

        System.out.println("\nAfter modification (changing city in original):");
        System.out.println("Original: " + s1);
        System.out.println("Shallow Copy: " + s2);
        System.out.println("Deep Copy: " + s3);
    }
}


 class Student {
    private int rollNo;
    private String name;
    private double marks;
    private Address address;

    // Default constructor
    public Student() {
        this.rollNo = 0;
        this.name = "Unknown";
        this.marks = 0.0;
        this.address = new Address("NA", "NA");
    }

    // Parameterized constructor
    public Student(int rollNo, String name, double marks, Address address) {
        this.rollNo = rollNo;
        this.name = name;
        this.marks = marks;
        this.address = address;
    }

    // Shallow Copy Constructor
    public Student(Student other) {
        this.rollNo = other.rollNo;
        this.name = other.name;
        this.marks = other.marks;
        this.address = other.address; // reference copy
    }

    // Deep Copy Method
    public Student deepCopy() {
        return new Student(this.rollNo, this.name, this.marks,
                new Address(this.address)); // new object
    }

    public Address getAddress() {
        return address;
    }

    @Override
    public String toString() {
        return "Student [RollNo=" + rollNo + ", Name=" + name +
                ", Marks=" + marks + ", Address=" + address + "]";
    }
}


 class Address {
    private String city;
    private String state;

    public Address(String city, String state) {
        this.city = city;
        this.state = state;
    }

    // Copy constructor (for deep copy)
    public Address(Address other) {
        this.city = other.city;
        this.state = other.state;
    }

    public void setCity(String city) {
        this.city = city;
    }

    @Override
    public String toString() {
        return city + ", " + state;
    }
}
