L = int(input())
M = 1234567891
r = 31
user_input = input()
 
answer = 0
 
for i in range(len(user_input)):
    num = ord(user_input[i]) - 96 # ord는 문자의 아스키 코드를 반환해주는 메서드
    answer += num * (r ** i)
 
print(answer % M)