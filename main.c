#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Count function similar to the Java version
void count(int n) {
    double tempN = 0;
    for (int i = 0; i < n; i++) {
        tempN += 1;
    }
    
}

// Log function similar to the Java version
int logFunc(int n) {
    int count = 0;
    double tempN = n;
    while (tempN > 1) {
        count++;
        tempN /= 1.00001;
    }
    return count;
}

// SelectionSort function (currently does nothing, just for structure)
void selectionSort(int n) {
    int count = 0;
    for (int i = 0; i < n; i++) {
        count += i % 5;
        for (int j = 0; j < n; j++) {
            count += j % 5;
        }
    }
}

// Fibonacci function similar to the Java version
int fib(int n) {
    if (n == 0) return 0;
    if (n == 1) return 1;
    return fib(n - 1) + fib(n - 2);
}

// Calculate time taken by a function in seconds
double calcTime(void (*func)(int), int n) {
    clock_t start = clock();
    func(n);
    clock_t end = clock();
    return ((double)(end - start)) / CLOCKS_PER_SEC;
}

// Wrapper for calcTime to handle int-returning functions
double calcTimeInt(int (*func)(int), int n) {
    clock_t start = clock();
    func(n);
    clock_t end = clock();
    return ((double)(end - start)) / CLOCKS_PER_SEC;
}

int main() {
    int inputs[60];
    double runtimes[60];
    
    // Testing `logFunc` function
    for (int i = 0; i < 30; i++) {
        int l = (i + 1) * 100000;
        inputs[i] = l;
        double avg = 0;
        for (int j = 0; j < 10; j++) {
            avg += calcTimeInt(logFunc, l);
        }
        runtimes[i] = avg / 10;
    }
    printf("Inputs:\n");
    for (int i = 0; i < 30; i++) {
        printf("%d ", inputs[i]);
    }
    printf("\nRuntimes:\n");
    for (int i = 0; i < 30; i++) {
        printf("%f ", runtimes[i]);
    }
    printf("\n");
    
    
    // Uncomment to test `count` function
    /*
    for (int i = 0; i < 30; i++) {
        int l = (i + 1) * 1000000;
        inputs[i] = l;
        double avg = 0;
        for (int j = 0; j < 10; j++) {
            avg += calcTime(count, l);
        }
        runtimes[i] = avg / 10;
    }
    printf("Inputs:\n");
    for (int i = 0; i < 30; i++) {
        printf("%d ", inputs[i]);
    }
    printf("\nRuntimes:\n");
    for (int i = 0; i < 30; i++) {
        printf("%f ", runtimes[i]);
    }
    printf("\n");
    */
    
    // Uncomment to test `selectionSort` function
    /*
    for (int i = 0; i < 60; i++) {
        int l = (i + 1) * 100;
        inputs[i] = l;
        double avg = 0;
        for (int j = 0; j < 20; j++) {
            avg += calcTime(selectionSort, l);
        }
        runtimes[i] = avg / 20;
    }
    printf("Inputs:\n");
    for (int i = 0; i < 60; i++) {
        printf("%d ", inputs[i]);
    }
    printf("\nRuntimes:\n");
    for (int i = 0; i < 60; i++) {
        printf("%f ", runtimes[i]);
    }
    printf("\n");
    
    
    // Uncomment to test `fib` function
    for (int i = 0; i < 20; i++) {
        int l = (i + 1) * 4;
        inputs[i] = l;
        double runtime = calcTimeInt(fib, l);
        printf("%f\n", runtime);
        runtimes[i] = runtime;
    }
    printf("Inputs:\n");
    for (int i = 0; i < 20; i++) {
        printf("%d ", inputs[i]);
    }
    printf("\nRuntimes:\n");
    for (int i = 0; i < 20; i++) {
        printf("%f ", runtimes[i]);
    }
    printf("\n");
    
    */
    return 0;
    
}
