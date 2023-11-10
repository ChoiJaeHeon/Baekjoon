import sys

input = sys.stdin.readline

num = input()
div = list(map(int, input().split()))
div.sort()
len = len(div)

res = div[0] * div[len-1]

print(res)