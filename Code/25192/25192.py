import sys

input = sys.stdin.readline

rep = int(input())
cnt = 0
res = 0
gomgom = set()

for i in range (rep):
    s = input().strip() #readline()으로 입력받으면 끝에 개행문자가 추가된다! 개행문자가 추가되면 ENTER로 인식하지 못하니까 strip() 메서드로 제거해 주도록 하자
    if (s == 'ENTER'):
        res += cnt
        cnt = 0
        gomgom.clear()
    else:
        gomgom.add(s)
        cnt = len(gomgom)

print(res + cnt)
    