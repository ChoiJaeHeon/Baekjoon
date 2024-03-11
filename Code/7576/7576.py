from collections import deque
import sys
input = sys.stdin.readline

M, N = map(int, input().split())
graph = [list(map(int, input().split())) for _ in range(N)]
visited = [[-1] * M for _ in range(N)]
start = []

dx = [-1, 1, 0, 0]
dy = [0, 0, -1, 1]

def bfs(queue):

    while queue:
        x, y = queue.popleft()
        
        for i in range(4):
            nx, ny = dx[i] + x, dy[i] + y
            
            if 0 <= nx < N and 0 <= ny < M and visited[nx][ny] == -1:
                if graph[nx][ny] == 1: 
                    visited[nx][ny] = 0
                elif graph[nx][ny] == -1: 
                    visited[nx][ny] = 0
                elif graph[nx][ny] == 0:
                    visited[nx][ny] = visited[x][y] + 1
                    queue.append((nx,ny))

for i in range(N):
    for j in range(M):
        if graph[i][j] == 1 and visited[i][j] == -1:
            start.append((i, j))
            visited[i][j] = 0

q = deque(start)

bfs(q)

flag = 0
for i in range(N):
    for j in range(M):
        if visited[i][j] == -1 and graph[i][j] != -1 and graph[i][j] != 1:
            print(-1)
            flag = 1
            break
    if flag == 1:
        break
    
max = 0
for i in range(N):
    for j in range(M):
       if max <= visited[i][j]:
           max = visited[i][j]

if flag != 1:
    print(max) 