import sys
input = sys.stdin.readline

n = int(input())
numbers = list(map(int, input().split()))
target = int(input())
cnt = 0
left, right = 0, n -1
numbers.sort()

while left < right:
    if numbers[left] + numbers[right] == target:
        cnt += 1
        right -= 1
    elif numbers[left] + numbers[right] < target:
        left += 1
    else:
        right -= 1
            
print(cnt)