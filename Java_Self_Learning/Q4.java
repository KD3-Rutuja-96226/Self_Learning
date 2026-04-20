enum Day{
    MONDAY,
    TUESDAY,
    WEDNESDAY,
    THURSDAY,
    FRIDAY,
    SATURDAY,
    SUNDAY;

    public boolean isWeekend() {
        return this == SATURDAY || this == SUNDAY;
    }

    public boolean isWeekday() {
        return !isWeekend();
    }
}

public class Q4 {
    public static void main(String[] args) {
        
        Day today = Day.FRIDAY;

        System.out.println("Today: " + today);
        System.out.println("Is Weekend? " + today.isWeekend());
        System.out.println("Is Weekday? " + today.isWeekday());
    }
    
}
