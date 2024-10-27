import time

def count(n):
    for _ in range(n):
        pass
    return

def log(n):
    count = 0
    while n > 1:
        count += 1
        n /= 1.00001
    return count
'''
def selectionSort(n):
    for _ in range(n):
        for _ in range(n):
            pass
    return
'''
def fib(n):
    if n == 0:
        return 0
    elif n == 1:
        return 1
    else:
        return fib(n-1) + fib(n-2)

def calcTime(func, n):
    start = time.time()
    func(n)
    end = time.time()
    return end-start
inputs = []
runtimes = []
'''
for i in range(30):
    l = (i+1) * (10 ** 5)
    inputs.append(l)
    avg = 0 
    for _ in range(10):
        avg += calcTime(count, l)
    runtimes.append(avg/10)
print(inputs)
print(runtimes)
'''
for i in range(30):
    l = (i+1) * (10 ** 5)
    inputs.append(l)
    avg = 0 
    for _ in range(10):
        avg += calcTime(log, l)
    runtimes.append(avg/10)
print(inputs)
print(runtimes)
'''
for i in range(60):
    l = (i+1) * (10 ** 2)
    inputs.append(l)
    avg = 0 
    for _ in range(20):
        avg += calcTime(selectionSort, l)
    runtimes.append(avg/20)
print(inputs)
print(runtimes)

for i in range(20):
    l = (i+1) * 4
    inputs.append(l)
    a = calcTime(fib, l)
    print(a)
    runtimes.append(a)
    
print(inputs)
print(runtimes)
'''
