from collections import deque

n, m, v = map(int, input().split()) # 정점, 간선수, 시작점을 입력받음

graph = [[] for _ in range(n+1)]

for i in range(m):
  x, y = map(int, input().split())
  graph[x].append(y)
  graph[y].append(x)
  graph[x].sort()
  graph[y].sort()

visited1 = [False] * (n+1) # dfs 그래프의 방문 여부를 담을 리스트
visited2 = [False] * (n+1) # bfs 그래프의 방문 여부를 담을 리스트

def dfs(graph, v, visited1):  # dfs 함수 정의
  visited1[v] = True # dfs 방문 처리
  print(v, end=' ') # 방문 후, 정점 출력
  for i in graph[v]: # 방문기록이 없고 인덱스에 값이 있다면
    if not visited1[i]: # 재귀함수로 호출될때마다 visited는 1이되고 v에 i 삽입
      dfs(graph, i, visited1)

def bfs(graph, start, visited2): # bfs 함수 정의
  queue = deque([start]) # Queue 구현을 위해 deque 라이브러리 사용
  visited2[start] = True # bfs 방문처리
  while queue: # 더 이상 방문할 노드가 없을 때 까지
    v = queue.popleft() # 큐에서 하나의 노드를 뽑기
    print(v, end=' ') # 뽑은 노드 출력
    for j in graph[v]: # 해당 노드와 연결되있는
      if not visited2[j]: # 방문기록이 없고 인덱스에 값이 있다면
        queue.append(j) # 큐에 삽입
        visited2[j] = True 

dfs(graph, v, visited1)
print("")
bfs(graph, v, visited2)