a, b = input().split()

# 문자열 역순으로 변환
a = a[::-1]
b = b[::-1]

# 문자열을 정수로 변환하여 더하기
sum_ = int(a) + int(b)

sum_str = str(sum_)[::-1]

# 합산 결과 출력
print(int(sum_str))
