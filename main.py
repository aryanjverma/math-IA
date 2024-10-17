import random
import time
import matplotlib.pyplot as plt
import numpy as np
averageIterations = 100
def findNumber(size):
    number = random.randint(1,size)
    guess = round(size/2)
    movement = guess
    while guess != number:
        
        if number > guess:
            guess = round(guess + movement/2)
            movement /= 2
        elif number < guess:
            guess = round(guess - movement/2)
            movement /= 2
    
    return guess
def iterate(size):
    for _ in range(size):
        pass
    return
def averageOutput(function, input):
    sum = 0
    for _ in range(averageIterations):
        sum += function(input)
    return sum/averageIterations
def calculateTime(function, input):
    startTime = time.time()
    function(input)
    endTime = time.time()
    return endTime - startTime
def doubleIt(number):
    return number * 2
x = []
y = []
for someSize in range(100):
    realSize = someSize * 100
    x.append(realSize)
    y.append((calculateTime(iterate,realSize)))
print(x)
print(y)
plt.scatter(x,y)

plt.title('Scatter Plot')
plt.xlabel('Input Size')
plt.ylabel('Runtime(seconds)')

plt.show()
