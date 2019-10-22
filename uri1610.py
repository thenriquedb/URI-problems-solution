from collections import defaultdict

hasCicle = False


class Graph:
    def __init__(self, vertices):
        self.graph = defaultdict(list)
        self.V = vertices

    def add_edge(self, u, v):
        self.graph[u - 1].append(v - 1)

    def isCyclicUtil(self, v, visited, recStack):
        visited[v] = True
        recStack[v] = True

        for neighbour in self.graph[v]:
            if visited[neighbour] == False:
                if self.isCyclicUtil(neighbour, visited, recStack) == True:
                    return True
            elif recStack[neighbour] == True:
                return True

        recStack[v] = False
        return False

    def isCyclic(self):
        visited = [False] * self.V
        recStack = [False] * self.V

        for node in range(self.V):
            if not visited[node]:
                if self.isCyclicUtil(node, visited, recStack):
                    return "SIM"
        return "NAO"


if __name__ == '__main__':
    t = input()

    for i in range(int(t)):
        values = input().split(" ")
        vertices, edges = values
        graph = Graph(int(vertices))

        for j in range(int(edges)):
            values = input().split(" ")
            graph.add_edge(int(values[0]), int(values[1]))

        print(graph.isCyclic())
        graph = None
