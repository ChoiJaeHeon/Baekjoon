from math import factorial
n = int(input())
cnt = 0
for x in str(factorial(n))[::-1]: #문자열 슬라이싱, 문자열 뒤에는 어디에든 올수있다 [시작:끝:규칙]
    if x != '0':
        break
    cnt += 1
print(cnt)