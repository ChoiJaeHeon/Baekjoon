import sys
input = sys.stdin.readline
n = int(input())
citations = list(map(int, input().split()))

def solution(citations):
    hIdx = 0
    citations.sort()
    left, right = 0, len(citations) - 1
    while left <= right:
        mid = (left + right) // 2
        if citations[mid] >= len(citations) - mid:
            hIdx = max(hIdx, len(citations) - mid)
            right = mid - 1
        else:
            left = mid + 1
    return print(hIdx) 

solution(citations)