#include <stdio.h>
#include <stdlib.h>

#define MAX_VERTICES 100

int visited[MAX_VERTICES];  
int adjacencyMatrix[MAX_VERTICES][MAX_VERTICES]; 

void breadthFirstSearch(int start, int vertices) {
    int queue[MAX_VERTICES];
    int front = 0, rear = 0;
    queue[rear++] = start;
    visited[start] = 1;
    printf("Breadth First Search starting from vertex %d: ", start);

    while (front < rear) {
        int currentVertex = queue[front++];
        printf("%d ", currentVertex);
        for (int i = 0; i < vertices; i++) {
            if (adjacencyMatrix[currentVertex][i] == 1 && !visited[i]) {
                queue[rear++] = i;
                visited[i] = 1;
            }
        }
    }
}

int main() {
    int vertices;

    printf("Enter the number of vertices: ");
    scanf("%d", &vertices);
    printf("Enter the adjacency matrix:\n");
    for (int i = 0; i < vertices; i++) {
        for (int j = 0; j < vertices; j++) {
            scanf("%d", &adjacencyMatrix[i][j]);
        }
    }
    for (int i = 0; i < vertices; i++) {
        visited[i] = 0;
    }
    breadthFirstSearch(0, vertices);

    return 0;
}
