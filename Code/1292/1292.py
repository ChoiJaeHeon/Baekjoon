import sys

input = sys.stdin.readline

start, end = map(int, input().split())

arr = [0]

for i in range (46):
    for j in range (i): 
        arr.append(i)
    
sum_ = 0
    
for i in range (start, end +1):
    sum_ += arr[i]
    
print(sum_)