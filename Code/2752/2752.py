numbers = list(map(int, input().split()))
numbers.sort(reverse=False)
for i in range(3):
    if i == 2:
        print(numbers[i])
    else:
        print(numbers[i], end=" ")