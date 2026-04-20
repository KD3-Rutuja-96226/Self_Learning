// Calculate the factorial of the given number using stream operations
import java.util.*;
import java.util.stream.IntStream;


public class Q8 {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter a number: ");
        int num=sc.nextInt();

        long fact=IntStream.rangeClosed(1, num).reduce(1,(a,b)->a*b);

        System.out.println("Factorial of number : "+fact);

    }
    
}
