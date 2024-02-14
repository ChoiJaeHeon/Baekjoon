a = int(input())
flag = 0

for i in range(a, 0, -1):
    for j in range(len(str(i))):
        if (str(i)[j] == '4' or str(i)[j] == '7'):
            if (j == len(str(i)) -1):
                print(i)
                flag = 1
            continue
        else:
            break
    if flag == 1:
        break