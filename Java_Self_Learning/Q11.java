public class Q11 {

    public static <T extends Number & Comparable<T>> T findMin(T[] array) {
        if (array == null || array.length == 0) {
            throw new IllegalArgumentException("Array cannot be null or empty");
        }

        T min = array[0];

        for (T element : array) {
            if (element.compareTo(min) < 0) {
                min = element;
            }
        }

        return min;
    }

    public static void main(String[] args) {
        Integer[] intArr = {5, 2, 9, 1, 3};
        Double[] doubleArr = {2.5, 0.5, 7.8, 1.1};

        System.out.println("Min Integer: " + findMin(intArr));
        System.out.println("Min Double: " + findMin(doubleArr));
    }
}

