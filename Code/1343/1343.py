import sys

input = sys.stdin.readline

board = input()

board = board.replace("XXXX", "AAAA")
board = board.replace("XX", "BB")

check = False

for i in board:
    if i == 'X':
        check = True

if check:
    print(-1)
else:
    print(board)