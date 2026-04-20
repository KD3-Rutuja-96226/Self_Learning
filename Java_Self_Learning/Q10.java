

//Create an IntStream to represent numbers from 1 to 10. Call various functions like sum(), summaryStatistics() and observe the output

import java.util.IntSummaryStatistics;
import java.util.stream.IntStream;

public class Q10 {
    public static void main(String[] args) {

        IntStream stream=IntStream.rangeClosed(1, 10);

        int sum=stream.sum();

        System.out.println("Sum: "+sum);

        IntSummaryStatistics stats = IntStream.rangeClosed(1, 10).summaryStatistics();
        System.out.println("Count: " + stats.getCount());
        System.out.println("Min: " + stats.getMin());
        System.out.println("Max: " + stats.getMax());
        System.out.println("Average: " + stats.getAverage());
        System.out.println("Sum from stats: " + stats.getSum());

        System.out.print("Even Numbers: ");
        IntStream.rangeClosed(1, 10)
        .filter(n->n%2==0)
        .forEach(n->System.out.print(n+" "));

        System.out.println();
        System.out.print("Odd Numbers: ");
        IntStream.rangeClosed(1,10)
        .filter(n->n%2!=0)
        .forEach(n->System.out.print(n+" "));

        System.out.println();
        System.out.print("Prime Numbers: ");
        
         IntStream.rangeClosed(2, 50)
                 .filter(Q10::isPrime)   // Q10 class and isPrime method
                 .forEach(num -> System.out.print(num + " "));

        
    }

    public static boolean isPrime(int num) {
        if (num <= 1) return false;

        return IntStream.rangeClosed(2, (int)Math.sqrt(num))
                        .allMatch(i -> num % i != 0);
    }
    
}
