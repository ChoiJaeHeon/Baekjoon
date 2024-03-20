import sys
input = sys.stdin.readline

n, m = map(int, input().split())
price = list()
income = 0
target  = 0

for i in range (m):
    egg = int(input())
    price.append(egg)
    
price.sort()

for i in range(m):
    egg = min(m-i, n)
    
    if income < price[i] * egg:
        income = price[i] * egg
        target = price[i]

print(target, income)