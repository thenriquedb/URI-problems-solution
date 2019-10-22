from collections import defaultdict


class Graph:
    def __init__(self, m, n):
        self.vertices = m
        self.edges = n
        self.graph = defaultdict(list)
        self.visited = [False] * self.vertices
        self.contFamilys = 0

    def add_edge(self, u, v):
        self.graph[u - 1].append(v - 1)

    def dfs(self):
        for i in range(int(self.vertices)):
            if not self.visited[i]:
                self.visited[i] = True
                self.contFamilys = self.contFamilys + 1

                stack = self.graph[i]

                while len(stack) != 0:
                    s = stack.pop()
                    # Marca o vertive como visitado
                    if not self.visited[s]:
                        self.visited[s] = True

                    # Visita todos os seus vizinhos
                    for neighbor in self.graph[s]:
                        if not self.visited[neighbor]:
                            self.visited[neighbor] = True
                            stack.append(neighbor)

        return self.contFamilys


if __name__ == '__main__':
    values = input().split(" ")
    vertices, edges = values
    graph = Graph(int(vertices), int(edges))

    for i in range(int(edges)):
        values = input().split(" ")
        graph.add_edge(int(values[0]), int(values[1]))
        graph.add_edge(int(values[1]), int(values[0]))

    print(graph.dfs())
