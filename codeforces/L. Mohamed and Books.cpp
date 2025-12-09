#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N;
    cin >> N;

    deque<int> store;
    for (int i = 0; i < N; i++) {
        int a;
        cin >> a;
        store.push_back(a);
    }

    int X;
    cin >> X;

    priority_queue<int> pq;

    for (int x = 0; x < X; x++) {
        char move;
        cin >> move;

        if (move == 'L') {
            if (store.empty()) {
                cout << "-1\n";
            } else {
                pq.push(store.front());
                store.pop_front();
            }
        }
        else if (move == 'R') {
            if (store.empty()) {
                cout << "-1\n";
            } else {
                pq.push(store.back());
                store.pop_back();
            }
        }
        else if (move == 'Q') {
            if (pq.empty()) {
                cout << "-1\n";
            } else {
                cout << pq.top() << "\n";
                pq.pop();
            }
        }
    }

    return 0;
}
