import sys
from math import factorial

rep = int(sys.stdin.readline())

for i in range (rep):
    M, N = map(int, sys.stdin.readline().split())
    res = 0
    res = (factorial(N) // factorial(N - M)) // factorial(M)
    print(int(res))