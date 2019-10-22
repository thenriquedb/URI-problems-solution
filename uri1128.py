import time
from collections import defaultdict


class Graph:
    def __init__(self, m, n):
        self.vertices = m
        self.edges = n
        self.graph = defaultdict(list)

    def add_edge(self, u, v, p):
        if p == 1:
            self.graph[u - 1].append(v - 1)
        else:
            self.graph[u - 1].append(v - 1)
            self.graph[v - 1].append(u - 1)

    def dfs(self):
        for i in range(self.vertices):
            self.visited = [False] * self.vertices
            stack = []
            stack.append(i)

            while len(stack):
                s = stack[-1]
                stack.pop()

                if not self.visited[s]:
                    self.visited[s] = True

                for node in self.graph[s]:
                    if not self.visited[node]:
                        stack.append(node)

            if any(i == False for i in self.visited):
                return 0
        return 1


if __name__ == '__main__':
    graph = None
    contEdges, m, n = 0, 0, 0

    while True:
        values = input().split(" ")

        if values[0] == "0" and values[1] == "0":
            break

        elif len(values) == 2:
            m = int(values[0])
            n = int(values[1])

            graph = Graph(int(m), int(n))

        else:
            v, w, p = values

            graph.add_edge(int(v), int(w), int(p))
            contEdges = contEdges + 1
            if int(contEdges) == n:
                contEdges = 0
                sorted(graph.graph)
                print(graph.dfs())
