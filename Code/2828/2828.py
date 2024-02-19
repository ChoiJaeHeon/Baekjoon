import sys

input = sys.stdin.readline
N, M = map(int, input().split())
apples = int(input())
greedy = list()
sum_ = 0
now = 1

for i in range (apples):
    greedy.append(int(input()))
    
for apple in greedy:
    if now <= apple and now + (M-1) >= apple:
        pass
    elif now > apple:
        sum_ += abs(apple - now)
        now = apple
    else:
        sum_ += apple - (M-1) - now
        now = apple - (M-1)
    
print(sum_)