dwarf = []

for i in range(9):
    dwarf.append(int(input()))
    
dwarf.sort()

sum_ = sum(dwarf)
key1 = -1
key2 = -1

for i in range(len(dwarf)):
    for j in range(i + 1, len(dwarf)):
        if sum_ - dwarf[i] - dwarf[j] == 100:
            key1 = i
            key2 = j
            break
    if key1 != -1 and key2 != -1:
        break
            
for i in range(9):
    if i != key1 and i != key2:
        print(dwarf[i])
