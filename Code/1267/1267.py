import sys

rep = int(sys.stdin.readline())
y = 0
m = 0
numbers = list(map(int, sys.stdin.readline().split()))

for i in range (rep):
    y += (numbers[i] // 30) + 1
    m += (numbers[i] // 60) + 1
        
total_y = y * 10
total_m = m * 15

if (total_y < total_m):
    print("Y", end=" ")
    print(total_y, end=" ")
elif (total_y > total_m):
    print("M", end=" ")
    print(total_m, end=" ")
else:
    print("Y", end=" ")
    print("M", end=" ")
    print(total_m, end=" ")
    