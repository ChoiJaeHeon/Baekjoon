import sys
input = sys.stdin.readline

s = input().rstrip().replace('pi', '11').replace('ka', '11').replace('chu', '111')
print('YES' if len(s) == s.count('1') else 'NO')