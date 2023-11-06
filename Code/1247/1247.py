import sys

for j in range (3):
    sum = 0
    rep = int(sys.stdin.readline())
    for i in range (rep):
        sum = int(sys.stdin.readline()) + sum
    if (sum > 0):
        print("+")
    elif (sum < 0):
        print("-")
    else:
        print("0")