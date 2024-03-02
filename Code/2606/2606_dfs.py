import sys
input = sys.stdin.readline

computer = int(input())
network = int(input())

graph = [[] for _ in range (computer+1)]
visited = [0] * (computer+1)    

for _ in range (network):
    a, b = map(int, input().split())
    graph[a].append(b)
    graph[b].append(a)


def dfs(v):
    visited[v] = 1
    for node in graph[v]:
        if visited[node] == 0:
            dfs(node)
            
dfs(1)
print(sum(visited)-1)