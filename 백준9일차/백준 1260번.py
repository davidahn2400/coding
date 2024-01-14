from collections import deque

n, m, v = map(int, input().split())

visited1 = [False]
visited2 = [False]

def dfs(graph, v, visited):
  visited1[v] = True
  print(v, end=' ')
  for i in graph[v]:
    if not visited1[i]:
      dfs(graph, i, visited)

def bfs(graph, start, visited):
  queue = deque(start)
  visited[start] = True
  while queue:
    v = queue.popleft()
    print(v, end=' ')
    for i in graph[v]:
      if not visited[i]:
        queue.append(i)
        visited[i] = True