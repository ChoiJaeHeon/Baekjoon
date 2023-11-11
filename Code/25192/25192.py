import sys

input = sys.stdin.readline

rep = int(input())
cnt = 0
res = 0
gomgom = set()

for i in range (rep):
    s = input().strip()
    if (s == 'ENTER'):
        res += cnt
        cnt = 0
        gomgom.clear()
    else:
        gomgom.add(s)
        cnt = len(gomgom)

print(res + cnt)
    