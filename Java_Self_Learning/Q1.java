import java.util.*;


class Address {
    String city;

    Address(String city) {
        this.city = city;
    }
}

class Student {
    private int roll;
    private String name;
    private Address address;

   
    public Student() {
        this.roll = 0;
        this.name = "Unknown";
        this.address = new Address("Not Assigned");
    }

    
    public Student(int roll, String name, Address address) {
        this.roll = roll;
        this.name = name;
        this.address = address;
    }

    // 3. Shallow Copy Constructor
    public Student(Student s) {
        this.roll = s.roll;
        this.name = s.name;
        this.address = s.address; // reference copy (SHALLOW)
    }

    // 4. Deep Copy Method
    public Student deepCopy() {
        Address newAddress = new Address(this.address.city);
        return new Student(this.roll, this.name, newAddress);
    }

    public void setCity(String city) {
        this.address.city = city;
    }

    public void display() {
        System.out.println("Roll: " + roll + ", Name: " + name + ", City: " + address.city);
    }
}

// Main class
public class Q1 {
    public static void main(String[] args) {

        // Original object
        Address addr = new Address("Mumbai");
        Student s1 = new Student(1, "Amit", addr);

        // Shallow Copy
        Student s2 = new Student(s1);

        // Deep Copy
        Student s3 = s1.deepCopy();

        System.out.println("Before modification:");
        s1.display();
        s2.display();
        s3.display();

        // Modify original object's address
        s1.setCity("Pune");

        System.out.println("\nAfter modifying s1 city:");
        s1.display();
        s2.display(); // affected (shallow copy)
        s3.display(); // not affected (deep copy)
    }
}