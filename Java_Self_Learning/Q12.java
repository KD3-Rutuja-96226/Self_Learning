import java.util.Comparator;

public class Q12 {

    static <T> void selectionSort(T[] arr, Comparator<T> c) {
        for (int i = 0; i < arr.length - 1; i++) {

            int minIndex = i;

            for (int j = i + 1; j < arr.length; j++) {
                if (c.compare(arr[j], arr[minIndex]) < 0) {
                    minIndex = j;
                }
            }

            // Swap once per pass
            T temp = arr[i];
            arr[i] = arr[minIndex];
            arr[minIndex] = temp;
        }
    }

    public static void main(String[] args) {
        Integer[] arr = {64, 25, 12, 22, 11};

        selectionSort(arr, Comparator.naturalOrder());

        for (int x : arr) {
            System.out.print(x + " ");
        }
    }
}