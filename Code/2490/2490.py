import sys

for i in range (3):
    s = list(map(int, sys.stdin.readline().split()))
    cnt = 0
    for j in range (len(s)):
        if (s[j] == 0):
            cnt += 1
    if (cnt == 0):
        print("E")
    elif (cnt == 1):
        print("A")
    elif (cnt == 2):
        print("B")
    elif (cnt == 3):
        print("C")
    elif (cnt == 4):
        print("D")
    s.clear()