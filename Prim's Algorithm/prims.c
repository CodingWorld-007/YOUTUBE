#include <stdio.h>
#include <stdbool.h>

int main() {
    int V;
    printf("Enter the Number of Vertex: ");
    scanf("%d", &V);

    int G[V][V];
    printf("Enter the Adjacency Matrix:\n");
    for (int i = 0; i < V; i++) {
        for (int j = 0; j < V; j++) {
            scanf("%d", &G[i][j]);
        }
    }

    bool selected[V];
    for (int i = 0; i < V; i++) {
        selected[i] = false;
    }

    selected[0] = true;
    int no_edge = 0;
    int total_cost = 0;

    while (no_edge < V - 1) {
        int min = 100000;
        int x = 0, y = 0;
        for (int i = 0; i < V; i++) {
            if (selected[i]) {
                for (int j = 0; j < V; j++) {
                    if (!selected[j] && G[i][j] != 0) {
                        if (min > G[i][j]) {
                            min = G[i][j];
                            x = i;
                            y = j;
                        }
                    }
                }
            }
        }
        if (min == 100000) {
            printf("Not Connected Graph\n");
            return 0;
        }
        printf("%d - %d : %d\n", x, y, G[x][y]);
        total_cost += G[x][y];
        selected[y] = true;
        no_edge++;
    }
    printf("Total Cost of MST : %d\n", total_cost);
    return 0;
}
