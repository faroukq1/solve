#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    
    vector<vector<int>> matrix(n, vector<int>(m));
    vector<vector<int>> matrix2(n, vector<int>(m, 1));
    vector<vector<int>> matrix3(n, vector<int>(m, 0));
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> matrix[i][j];
        }
    }
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (matrix[i][j] == 0) {
                for (int x = 0; x < n; x++) matrix2[x][j] = 0;
                for (int y = 0; y < m; y++) matrix2[i][y] = 0;
            }
        }
    }
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (matrix2[i][j] == 1) {
                for (int x = 0; x < n; x++) matrix3[x][j] = 1;
                for (int y = 0; y < m; y++) matrix3[i][y] = 1;
            }
        }
    }
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (matrix[i][j] != matrix3[i][j]) {
                cout << "NO";
                return 0;
            }
        }
    }
    
    cout << "YES\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << matrix2[i][j] << " ";
        }
        cout << "\n";
    }
    
    return 0;
}
