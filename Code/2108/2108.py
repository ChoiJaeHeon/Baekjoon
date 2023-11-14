import sys

input = sys.stdin.readline

rep = int(input())
sum = 0
a = []

for i in range (rep):
    a.append(int(input()))

a.sort()

#산술평균 구하기 준비
for i in range (rep):
    sum += a[i]

#최빈값 구하기 준비
dic = dict()
for i in a:
    if i in dic:
        dic[i] += 1
    if i not in dic:
        dic[i] = 1

biggest = max(dic.values())
modes = []
for i in dic:
    if (dic[i] == biggest):
        modes.append(i)

if len(modes) > 1:
    mode = modes[1]
else:
    mode = modes[0]


      
avg = round(sum / rep) #round() 반올림
med = a[rep // 2]
num_range = (a[-1] - a[0])

print(avg)
print(med)
print(mode)
print(num_range)