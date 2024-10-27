import java.util.ArrayList;

public class TimingAnalysis {
    
    // Method similar to count in Python
    public static void count(int n) {
        for (int i = 0; i < n; i++) {
            // Do nothing
        }
    }

    // Method similar to log in Python
    public static int log(int n) {
        int count = 0;
        double tempN = n;
        while (tempN > 1) {
            count++;
            tempN /= 1.00001;
        }
        return count;
    }

    // Uncomment and complete for selectionSort
    /*
    public static void selectionSort(int n) {
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                // Do nothing
            }
        }
    }
    */

    // Fibonacci function similar to Python version
    public static int fib(int n) {
        if (n == 0) return 0;
        if (n == 1) return 1;
        return fib(n - 1) + fib(n - 2);
    }

    // Method to calculate time taken by function
    public static double calcTime(Runnable func) {
        long start = System.nanoTime();
        func.run();
        long end = System.nanoTime();
        return (end - start) / 1_000_000_000.0; // Convert to seconds
    }

    public static void main(String[] args) {
        ArrayList<Integer> inputs = new ArrayList<>();
        ArrayList<Double> runtimes = new ArrayList<>();

        // Testing `log` function
        for (int i = 0; i < 30; i++) {
            int l = (i + 1) * 100_000;
            inputs.add(l);
            double avg = 0;
            for (int j = 0; j < 10; j++) {
                final int inputVal = l; // Final to use in lambda expression
                avg += calcTime(() -> log(inputVal));
            }
            runtimes.add(avg / 10);
        }
        System.out.println(inputs);
        System.out.println(runtimes);

        /*
        // Uncomment and test `count` function
        for (int i = 0; i < 30; i++) {
            int l = (i + 1) * 1_000_000;
            inputs.add(l);
            double avg = 0;
            for (int j = 0; j < 10; j++) {
                final int inputVal = l;
                avg += calcTime(() -> count(inputVal));
            }
            runtimes.add(avg / 10);
        }
        System.out.println(inputs);
        System.out.println(runtimes);

        // Uncomment and test `selectionSort` function
        for (int i = 0; i < 60; i++) {
            int l = (i + 1) * 100;
            inputs.add(l);
            double avg = 0;
            for (int j = 0; j < 20; j++) {
                final int inputVal = l;
                avg += calcTime(() -> selectionSort(inputVal));
            }
            runtimes.add(avg / 20);
        }
        System.out.println(inputs);
        System.out.println(runtimes);

        // Uncomment and test `fib` function
        for (int i = 0; i < 20; i++) {
            int l = (i + 1) * 4;
            inputs.add(l);
            double runtime = calcTime(() -> fib(l));
            System.out.println(runtime);
            runtimes.add(runtime);
        }
        System.out.println(inputs);
        System.out.println(runtimes);
        */
    }
}
