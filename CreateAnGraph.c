#include<stdio.h>
#define MAX_VERTICES 10

// function to initialize the adjacency matrix

void initializeGraph(int graph[MAX_VERTICES][MAX_VERTICES], int vertices) {
	int i, j;
	for (i = 0; i < vertices; i++) {
		for (j = 0; j < vertices; j++) {
			graph[i][j] = 0; // initialize all edges as 0 (no edge)
		}
	}
}

// function to add an edge between the vertices
void addEdge(int graph[MAX_VERTICES][MAX_VERTICES], int u, int v) {
	graph[u][v] = 1; // mark the edge between u and v as 1 (edge exists)
	graph[v][u] = 1; // for an undirected graph, mark the edge between v and u as 1 as well 
}

// function to display the adjacency matrix
void displayGraph(int graph[MAX_VERTICES][MAX_VERTICES], int vertices)
{
	int i, j;
	printf("\n Adjacency Matrix: ");
	for (i = 0; i < vertices; i++) {
		for (j = 0; j < vertices; j++) {
			printf("%d", graph[i][j]);
		}
		printf("\n");
	}
	
}
int main() {
	int vertices = 5; // number of vertices in the graph
	int graph[MAX_VERTICES][MAX_VERTICES]; // adjacency matrix

	initializeGraph(graph, vertices);

	// adding edjes to the graph
	addEdge(graph, 0, 1);
	addEdge(graph, 0, 2);
	addEdge(graph, 1, 3);
	addEdge(graph, 2, 4);

	// diaplay the graph
	displayGraph(graph, vertices);
	return 0;
}