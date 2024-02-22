import sys

input = sys.stdin.readline

player = int(input())

number = [[], [], []]

for _ in range (player):
    a, b, c = map(int, input().split())
    number[0].append(a)
    number[1].append(b)
    number[2].append(c)
    
score = [0] * player

for i in range (3):
    for j in range (player):
        if (number[i].count(number[i][j]) >= 2):
            score[j] += 0
        else:
            score[j] += number[i][j]

for i in score:
    print(i)


