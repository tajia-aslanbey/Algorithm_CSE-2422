#include <iostream>
using namespace std;

int main() {
    int adj[6][6] = {
        {0,1,1,0,0,0},
        {1,0,0,1,1,0},
        {1,0,0,0,0,1},
        {0,1,0,0,0,0},
        {0,1,0,0,0,0},
        {0,0,1,0,0,0}
    };

    bool visited[6] = {false};
    int stack[10];
    int top = -1;

    int start = 0;
    stack[++top] = start;
    visited[start] = true;

    cout << "DFS Traversal: ";

    while (top >= 0) {
        int node = stack[top--];
        cout << node << " ";

        for (int i = 0; i < 6; i++) {
            if (adj[node][i] == 1 && !visited[i]) {
                visited[i] = true;
                stack[++top] = i;
            }
        }
    }

    cout << endl;
    return 0;
}
