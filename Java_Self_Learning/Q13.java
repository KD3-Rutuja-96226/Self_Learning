import java.util.*;

class Student {
    private int roll;
    private String name;
    private String city;
    private double marks;

    public Student(int roll, String name, String city, double marks) {
        this.roll = roll;
        this.name = name;
        this.city = city;
        this.marks = marks;
    }

    public String getCity() { return city; }
    public double getMarks() { return marks; }
    public String getName() { return name; }

    @Override
    public String toString() {
        return roll + " " + name + " " + city + " " + marks;
    }
}

public class Q13 {
    public static void main(String[] args) {

        Student[] students = {
            new Student(1, "Amit", "Mumbai", 85.5),
            new Student(2, "Riya", "Delhi", 92.0),
            new Student(3, "Karan", "Mumbai", 92.0),
            new Student(4, "Neha", "Delhi", 85.5),
            new Student(5, "Arjun", "Mumbai", 85.5)
        };

        Arrays.sort(students, new Comparator<Student>() {
            @Override
            public int compare(Student s1, Student s2) {

                // 1. City (Descending)
                int cityCompare = s2.getCity().compareTo(s1.getCity());
                if (cityCompare != 0) return cityCompare;

                // 2. Marks (Descending)
                int marksCompare = Double.compare(s2.getMarks(), s1.getMarks());
                if (marksCompare != 0) return marksCompare;

                // 3. Name (Ascending)
                return s1.getName().compareTo(s2.getName());
            }
        });

        for (Student s : students) {
            System.out.println(s);
        }
    }
}