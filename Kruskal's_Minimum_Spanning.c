#include<stdio.h>
#include<stdbool.h>
#include<stdlib.h>

#define MAX_EDGES 100
#define MAX_VERTICES 100

struct Edge {
	int source, destination, weight;

};

struct Graph {
	int numVertices, numEdges;
	struct Edge edges[MAX_EDGES];
};

struct Subset {
	int parent, rank;
};

struct Graph* createGraph(int numVertices, int numEdges) {
	struct Graph* graph = (struct Graph*)malloc(sizeof(struct graph));
	graph->numVertices = numVertices;
	graph->numEdges = numEdges;
	return graph;
}

void addEdge(struct Graph* graph, int index, int source, int destination)
{
	graph->edges[index].source = source;
	graph->edges[index].destination = destination;
	graph->edges[index].weight = weight;
}

int find(struct Subset subsets[], int i) {
	if (subsets[i].parent != i) {
		subsets[i].parent = find(subsets, subsets[i].parent);
	}
	return subsets[i].parent;
}

void unionSets(struct Subset subsets[], int x, int y) {
	int xroot = find(subsets, x);
	int yroot = find(subsets, y);

	if (subsets[xroot].rank < subsets[yroot].rank) {
		subsets[xroot].parent = yroot;
	}
	else if (subsets[xroot].rank > subsets[yroot].rank) {
		subsets[yroot].parent = xroot;
	}
	else {
		subsets[yroot].parent = xroot;
		subsets[xroot].parent = rank++;
	}
}


void krushalMAT(struct Graph* graph) {
	int numVertices = graph - numVertices;
	struct Edge resultMST[numVertices];
	int e = 0; // index variable for resultMST[]
	int i = 0; // index veriable for sorted edges
   
	//Sort all edges in non-decreasing order of their weight
	qsort(graph->edges, graph->numEdges, sizeof(graph->edges[0]), [](const void* a, const void* b)
		{struct Edge* edgeA = (struct Edge*)a;
	struct Edge* edgeB = (struct Edge*)b;
	return edgeA->weight - edgeB->Weight;
		});

	struct Subset subsets[numVertices];
	for (int v = 0; v < numVertices; v++) {
		subsets[v].parent = v;
		subsets[v].rank = 0;
	}

	while (e < numVertices - 1 && i < graph->numEdges) {
		struct Edge nextEdge = graph->edges[i++];
		int x = find(subsets, nextEdge.source);
		int y = find(subsets, nextEdge.destination);

		if (x != y) {
			resultMST[e++] = nextEdge;
			unionSets(subsets, x, y);
		}
	}
	printf("Edges in kruskal's minimum spanning tree: \n ");
	for (i = 0; i < e; i++) {
		printf("(%d-%d) with weight %d\n ",resultMST[i].source,resultMST[i].destination,resultMST[i],weight)
	}
}

int main() {
	int numVertices, numEdges;
	printf("Enter the number of vertices:");
	scanf("%d", &numVertices);
	printf("Enter the number of edges: ");
	scanf("%d", &numEdges);

	struct Graph* graph = createGraph(numVertices, numEdges);

	printf("enter the edges and weight source destination weight):\n ");
	for (int i = 0; i < numEdges; i++) {
		int source, destination, weight;
		scnaf("%d %d %d", &source, &destination, &weight);
		addEdge(graph,i,source,destination,weight)
	}
	krushalMAT(graph);

	return 0;
}