import sys

s = list(map(int,sys.stdin.readline().split()))
people = s[0] * s[1]

s = list(map(int, sys.stdin.readline().split()))
for i in range (5):
    error = s[i] - people
    print (error, end=" ")
