from collections import deque

n, m, v = map(int, input().split())

visited1 = [False] # dfs 그래프의 방문 여부를 담을 리스트
visited2 = [False] # bfs 그래프의 방문 여부를 담을 리스트

def dfs(graph, v, visited): 
  visited1[v] = True # dfs 방문 처리
  print(v, end=' ') # 방문 후, 정점 출력
  for i in graph[v]:
    if not visited1[i]: # 방문 기록이 없다면
      dfs(graph, i, visited)

def bfs(graph, start, visited):
  queue = deque(start)
  visited[start] = True # bfs 방문처리
  while queue: # 더 이상 방문할 노드가 없을 때 까지
    v = queue.popleft() # 제일 앞에 있는 노드 삭제
    print(v, end=' ') # 정점 출력
    for i in graph[v]:
      if not visited[i]: # 방문 기록이 없다면
        queue.append(i) # 노드 삽입
        visited[i] = True # 방문처리