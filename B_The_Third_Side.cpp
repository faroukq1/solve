#include <bits/stdc++.h>
using namespace std;


// using priority queue
void run_case() {
    int N;
    cin >> N;
    priority_queue<int> pq;
    for (int i = 0, a; i < N; i++) {
        cin >> a;
        pq.push(a);
    }
    while (pq.size() > 1) {
        int last = pq.top(); pq.pop();
        int before_last = pq.top();  pq.pop();
        pq.push(last + before_last - 1);
    }

    cout << pq.top() << '\n';
}


// solving using vec
void solve () {
    int N;
    cin >> N;
    vector<int> A(N);
    for (auto &a : A)
        cin >> a;

    while (A.size() > 1) {
        const int size = A.size();
        const int last = A[size - 1];
        const int before_last = A[size - 2];
        const int add = last + before_last - 1;
        A.erase(A.end() - 2, A.end());
        A.push_back(add);
    }

    cout << A.front() << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tests;
    cin >> tests;

    while (tests-- > 0)
        run_case();

    return 0;
}
