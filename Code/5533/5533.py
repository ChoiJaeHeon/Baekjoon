import sys

input = sys.stdin.readline

player = int(input())

number = [[], [], []] # 각 게임에서 플레이어들이 적은 점수를 저장할 리스트

for _ in range (player): # 점수 입력받아서 저장하기
    a, b, c = map(int, input().split()) 
    number[0].append(a)
    number[1].append(b)
    number[2].append(c)
    
score = [0] * player # 플레이어의 최종 점수를 저장할 리스트(배열)

for i in range (3):
    for j in range (player):
        if (number[i].count(number[i][j]) >= 2): # 같은 숫자를 적은 플레이어가 있는 경우
            score[j] += 0 # 0점
        else: 
            score[j] += number[i][j]

for i in score: # 최종 점수 출력
    print(i)


