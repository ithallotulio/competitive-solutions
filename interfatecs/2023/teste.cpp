#include <iostream>
#include <vector>
#include <cstring>

using namespace std;

vector<vector<int>> points;
vector<bool> visited;

void depthFirstSearch(int node, int n) {
    visited[node] = true;
    for (int next = 1; next <= n; next++) {
        if (points[node][next] == 1 && !visited[next]) {
            depthFirstSearch(next, n);
        }
    }
}

int main() {
    string line;
    string res;
    while (getline(cin, line)) {
        if (line == "0 0") {
            break;
        }

        int n, m;
        cin >> n >> m;

        if (n < 2 || n > 2000 || m < 2 || m > (n * (n - 1)) / 2) {cout << "Input error" << endl;return 0;}

        points.assign(n + 1, vector<int>(n + 1, 0));
        visited.assign(n + 1, false);

        for (int i = 0; i < m; i++) {
            int v, w, d;
            cin >> v >> w >> d;

            points[v][w] = 1;
            if (d == 2) {
                points[w][v] = 1;
            }
        }

        bool isConnected = true;
        for (int i = 1; i <= n; i++) {
            visited.assign(n + 1, false);
            depthFirstSearch(i, n);
            for (int j = 1; j <= n; j++) {
                if (!visited[j]) {
                    isConnected = false;
                    break;
                }
            }
            if (!isConnected) {
                break;
            }
        }

        if (isConnected) {
            res += 'S';
        } else {
            res += 'N';

        }
    }
    for (char c: res) {
        cout << c << endl;
    }
    return 0;
}
