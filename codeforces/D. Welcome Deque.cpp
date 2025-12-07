#include <iostream>
#include <deque>
using namespace std;

int main() {
    int n;
    cin >> n;
    deque<int> dq;

    while(n--) {
        string cmd;
        cin >> cmd;
        if(cmd == "push_back") {
            int x; cin >> x;
            dq.push_back(x);
        } else if(cmd == "push_front") {
            int x; cin >> x;
            dq.push_front(x);
        } else if(cmd == "pop_back") {
            if(!dq.empty()) dq.pop_back();
        } else if(cmd == "pop_front") {
            if(!dq.empty()) dq.pop_front();
        } else if(cmd == "front") {
            if(!dq.empty()) cout << dq.front() << endl;
        } else if(cmd == "back") {
            if(!dq.empty()) cout << dq.back() << endl;
        } else if(cmd == "print") {
            int idx; cin >> idx;
            if(idx >= 1 && idx <= dq.size())
                cout << dq[idx-1] << endl; // 1-based index
        }
    }
}
