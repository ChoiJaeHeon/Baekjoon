import sys
input = sys.stdin.readline

N, M = map(int, input().split())
bundle = []
each = []

for i in range (M):
    a, b = map(int, input().split())
    bundle.append(a)
    each.append(b)
    
bundle.sort()
each.sort()

if bundle[0] / 6 >= each[0]:
    print(each[0] * N)
else:
    num1 = N // 6
    num2 = N % 6
    if num1 * bundle[0] + num2 * each[0] <= (num1+1) * bundle[0]:
        print(num1 * bundle[0] + num2 * each[0])
    else:
        print((num1+1) * bundle[0])