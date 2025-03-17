#include <bits/stdc++.h>
using namespace std;


// using priority queue
void run_case() {
    int N;
    cin >> N;
    priority_queue<int> pq;
    for (int i = 0; i < N; i++) {
        int a;
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

void update (vector<int>& A) {
    sort(A.begin(), A.end());
    const int size = A.size();
    const int last = A[size - 1], before_last = A[size - 2];
    A.erase(A.end() - 2, A.end());
    A.push_back(last + before_last - 1);
};

void solve () {
    int N;
    cin >> N;
    vector<int> A(N);
    for (auto &a : A)
        cin >> a;
        
            while (A.size() > 1)
        update(A);

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
