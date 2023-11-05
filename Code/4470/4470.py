import sys
n = int(input())
for i in range (1, n+1):
    s = sys.stdin.readline()
    print(f'{i}. {s}', end = "")  