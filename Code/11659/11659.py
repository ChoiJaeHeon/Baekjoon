import sys
input = sys.stdin.readline

N, M = map(int, input().split())

numbers = list(map(int, input().split()))
prefix_sum = [0]

tmp = 0    
for i in numbers:    # accumulate arr section 
    tmp += i
    prefix_sum.append(tmp)
 
for i in range(M):
    a, b = map(int, input().split())
    print(prefix_sum[b] - prefix_sum[a-1])
