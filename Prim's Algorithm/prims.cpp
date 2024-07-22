#include <iostream>
#include <vector>
#include <limits.h>

using namespace std;

int main() {
    int V;
    cout << "Enter the Number of Vertex: ";
    cin >> V;

    vector<vector<int>> G(V, vector<int>(V));
    cout << "Enter the Adjacency Matrix:\n";
    for (int i = 0; i < V; i++) {
        for (int j = 0; j < V; j++) {
            cin >> G[i][j];
        }
    }

    vector<bool> selected(V, false);
    selected[0] = true;
    int no_edge = 0;
    int total_cost = 0;

    while (no_edge < V - 1) {
        int min = INT_MAX;
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
        if (min == INT_MAX) {
            cout << "Not Connected Graph\n";
            return 0;
        }
        cout << x << " - " << y << " : " << G[x][y] << endl;
        total_cost += G[x][y];
        selected[y] = true;
        no_edge++;
    }
    cout << "Total Cost of MST : " << total_cost << endl;
    return 0;
}
