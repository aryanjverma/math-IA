function count(n) {
    let count = 0 ;
    for (let i = 0; i < n; i++) {
        count += i % 5;
    }
    return count
}

function logFunc(n) {
    let count = 0;
    while (n > 1) {
        count++;
        n /= 1.00001;
    }
    return count;
}

// Uncomment and complete for selectionSort

function selectionSort(n) {
    let count = 0;
    for (let i = 0; i < n; i++) {
        count += i % 5;
        for (let j = 0; j < n; j++) {
            count += j % 5;
        }
    }
}


function fib(n) {
    if (n === 0) return 0;
    if (n === 1) return 1;
    return fib(n - 1) + fib(n - 2);
}

function calcTime(func, n) {
    const start = Date.now();
    func(n);
    const end = Date.now();
    return (end - start) / 1000; // Convert milliseconds to seconds
}

const inputs = [];
const runtimes = [];

// Uncomment to test `count` function
/*
for (let i = 0; i < 30; i++) {
    const l = (i + 1) * (10 ** 6);
    inputs.push(l);
    let avg = 0;
    for (let j = 0; j < 10; j++) {
        avg += calcTime(count, l);
    }
    runtimes.push(avg / 10);
}
console.log("Inputs:", inputs);
console.log("Runtimes:", runtimes);
*/

// Testing `logFunc` function
for (let i = 0; i < 30; i++) {
    const l = (i + 1) * (10 ** 5);
    inputs.push(l);
    let avg = 0;
    for (let j = 0; j < 10; j++) {
        avg += calcTime(logFunc, l);
    }
    runtimes.push(avg / 10);
}
console.log("Inputs:", inputs);
console.log("Runtimes:", runtimes);
/*

// Uncomment to test `selectionSort` function
for (let i = 0; i < 60; i++) {
    const l = (i + 1) * (10 ** 2);
    inputs.push(l);
    let avg = 0;
    for (let j = 0; j < 20; j++) {
        avg += calcTime(selectionSort, l);
    }
    runtimes.push(avg / 20);
}
console.log("Inputs:", inputs);
console.log("Runtimes:", runtimes);
*/

// Uncomment to test `fib` function
/*
for (let i = 0; i < 20; i++) {
    const l = (i + 1) * 4;
    inputs.push(l);
    const runtime = 1000 * calcTime(fib, l);
    console.log(runtime);
    runtimes.push(runtime);
}
console.log("Inputs:", inputs);
console.log("Runtimes:", runtimes);

*/
