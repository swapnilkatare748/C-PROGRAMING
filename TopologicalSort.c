#include<stdio.h>
#include<stdlib.h>

#define MAX_SIZE 100

struct Node {
	int vertex;
	struct Node* next;
};

struct Graph {
	int numVertices;
	struct Node** adjLists;
	int* visited;
};

struct Node* createNode(int v)
{
	struct Node* newNode = malloc(sizeof(struct Node));
	newNode->vertex = v;
	newNode->next = NULL;
	return newNode;
};

struct Graph* createGraph(int vertices) {
	struct Graph* graph = malloc(sizeof(struct Graph));
	graph->numVertices = vertices;

	graph->adjLists = malloc(vertices * sizeof(struct Node*));
	graph->visited = malloc(vertices * sizeof(int));
     
	int i;
	for (i = 0; i < vertices; i++) {
		graph->adjLists[i] = NULL;
		graph->visited[i] = 0;
	}
	return graph;

}
void addEdge(struct Graph* graph, int src, int dest) {
	struct Node* newNode = createNode(dest);
	newNode->next = graph->adjLists[src];
	graph->adjLists[src] = newNode;
}

void topologicalSortUtil(int v, struct Graph* graph, int visited[], int stack[]) {
	{
		visited[v] = 1;

		struct Node* temp = graph->adjLists[v];
		while (temp != NULL)
		{
			int adjVertex = temp->vertex;
			if (!visited[adjVertex]) {
				topologicalSortUtil(adjVertex, graph, visited, stack);
			}
			temp = temp->next;
		}
		stack[--stack[0]] = v;
	}
}

void topologicalSort(struct Graph* graph) 
{
	int stack[MAX_SIZE];
	stack[0] = graph->numVertices;

	int visited[MAX_SIZE];
	int i;
	for (i = 0; i < graph->numVertices; i++) {
		visited[i] = 0;
	}
	for (i = 0; i < graph->numVertices; i++) {
		if (!visited[i]) {
			topologicalSortUtil(i, graph, visited, stack);
		}
	}

	printf("Topologial sorting: ");
	for (i = 0; i < stack[0]; i++) {
		printf("%d", stack[i + 1]);
	}
	printf("\n");
}

int main()
{
	struct Graph* graph = createGraph(6);
	addEdge(graph, 5, 2);
	addEdge(graph, 5, 0);
	addEdge(graph, 4, 0);
	addEdge(graph, 4, 1);
	addEdge(graph, 2, 3);
	addEdge(graph ,3, 1);

	topologicalSort(graph);

	return 0;
}