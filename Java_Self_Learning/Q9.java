import java.util.*;
import java.util.stream.IntStream;
import java.util.stream.Stream;


//Write a program to calculate sum of integers using streams.
public class Q9 {
    public static void main(String[] args) {
       
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter a number:");
        int num1 = sc.nextInt();
        int num2=sc.nextInt();

        Stream.of(num1,num2)
        .map(a->num1+num2)
        .forEach(e->System.out.println("Sum of Integers: "+e));
        
        
    }
    
}
