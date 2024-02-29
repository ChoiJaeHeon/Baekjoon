from collections import deque

computer = int(input())
network = int(input())

graph = [[] for _ in range(computer+1)]
visited = [0] * (computer+1)

for i in range (network):
    a, b = map(int, input().split())
    graph[a].append(b)
    graph[b].append(a)
    
visited[1] = 1 # 첫 번째 컴퓨터에 방문 표시
Q = deque([1]) # 첫 번째 컴퓨터에 대해 덱을 만든다.
while Q:
    now = Q.popleft()
    for node in graph[now]:
        if visited[node] == 0:
            Q.append(node)
            visited[node]=1
            
print(sum(visited)-1) 