import sys
input = sys.stdin.readline

N, M = map(int, input().split())
books = list(map(int, input().split()))

current = M
cnt = 0

i = 0
while i < N:
    if current - books[i] >= 0:
        current -= books[i]
        i += 1
    else:
        current = M
        cnt += 1

if current < M:
    cnt += 1

print(cnt)
