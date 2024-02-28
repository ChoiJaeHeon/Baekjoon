import sys
input = sys.stdin.readline

test_case = int(input())
for _ in range (test_case):
    N, target = map(int, input().split())
    queue = list(map(int, input().split()))
    
    res = 1
    while queue:
        if queue[0] < max(queue):
            queue.append(queue.pop(0))
        
        else:
            if target == 0:
                break
            
            queue.pop(0)
            res += 1
        
        target = target - 1 if target > 0 else len(queue) - 1
    
    print(res)