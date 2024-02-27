import sys
input = sys.stdin.readline

N = int(input())
people = list()
answer = list()

for i in range (N):
    weight, height = map(int, input().split())
    people.append((weight, height))
    
for i in range (N):
    cnt = 1
    j = i
    for j in range (N):
        if (people[i][0] < people[j][0] and people[i][1] < people[j][1]):
            cnt += 1
    answer.append(cnt)
    
for i in answer:
    print(i, end=" ")   
