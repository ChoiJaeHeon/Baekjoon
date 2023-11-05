import sys

a = list(map(int, sys.stdin.readline().split()))

sum = a[0]
sub = a[1]

n1 = (sum + sub) / 2
n2 = sum - n1

if (n1 < 0 or n2 < 0 or n1 % 1 != 0) :
    print(-1)
else:
    if (n1 > n2) :
        print(int(n1), int(n2)) 
    else:
        print(int(n2), int(n1))