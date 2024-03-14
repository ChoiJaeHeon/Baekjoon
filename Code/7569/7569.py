from collections import deque
import sys
input = sys.stdin.readline

M, N, H = map(int, input().split())
graph = [[list(map(int, input().split())) for _ in range (N)] for _ in range(H)]
visited = [[[-1] * M for _ in range(N)] for _ in range(H)]
queue = deque()

for i in range (H):
    for j in range (N):
        for k in range (M):
            if graph[i][j][k] == 1:
                queue.append((i,j,k))
                visited[i][j][k] = 0
    
dx = [-1, 1, 0, 0, 0, 0]
dy = [0, 0, -1, 1, 0, 0]
dz = [0, 0, 0, 0, -1, 1]

while queue:
    x, y, z = queue.popleft()
    
    for i in range (6):
        nx = x + dx[i]
        ny = y + dy[i]
        nz = z + dz[i]
        
        if 0 <= nx < H and 0 <= ny < N and 0 <= nz < M and visited[nx][ny][nz] == -1:
            if graph[nx][ny][nz] == 0:
                queue.append((nx,ny,nz))
                visited[nx][ny][nz] = visited[x][y][z]+1
                
for i in range (H):
    for j in range (N):
        for k in range (M):
            if graph[i][j][k] != -1 and visited[i][j][k] == -1:
                print(-1)
                exit(0)
max = 0
for i in range (H):
    for j in range (N):
        for k in range (M):
            if visited[i][j][k] > max:
                max = visited[i][j][k]
                
print(max)