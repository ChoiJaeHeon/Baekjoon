import sys

input = sys.stdin.readline

words = dict()

N, M = map(int, input().rstrip().split())

for i in range (N):
    s = input().rstrip()
    
    if len(s) < M:
        continue
    else:
        if s in (words):
            words[s] += 1
        if s not in (words):
            words[s] = 1
            
            
words = sorted(words.items(), key = lambda x : (-x[1], -len(x[0]), x[0])) #sorted 함수의 사용법 https://velog.io/@bjo6300/%EB%B0%B1%EC%A4%80-20920-%ED%8C%8C%EC%9D%B4%EC%8D%AC-%EC%98%81%EB%8B%A8%EC%96%B4-%EC%95%94%EA%B8%B0%EB%8A%94-%EA%B4%B4%EB%A1%9C%EC%9B%8C
#[0] == key, [1] == value,-붙이면 내림차순 변경, 즉 -x[1]은 자주 나온 순, 그 다음순위 -len(x[0]은 key의 길이가 긴 순, 마지막 순위는 알파벳 오름차순)

for i in words:
    print(i[0])
    
# 키 출력하는법 for key in dict이름 print(key), value 출력하는법 for value in words.values, key value 모두 출력하는법 for key, value in dic,items()
# 단 위 문제처럼 튜플로 나누어 생각했을 경우에는 [0] == key 