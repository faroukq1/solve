#include <bits/stdc++.h>
using namespace std;

void dbg_out() { cerr << endl; }
template <typename Head, typename... Tail> void dbg_out(Head H, Tail... T) {
  cerr << ' ' << H;
  dbg_out(T...);
}
#define dbg(...) cerr << "(" << #__VA_ARGS__ << "):", dbg_out(__VA_ARGS__)

int main () {
    int N;
    cin >> N;
    vector<int> lucky_numbers;
    for (int i = 0 ; i < 1e3 ; i++) {
        string temp = to_string(i);
        bool lucky_number = true;
        for (auto c : temp)
            if (c != '4' && c != '7') {
                lucky_number = false;
                break;
            }
        if (lucky_number)
            lucky_numbers.push_back(i);
    
    }
    bool ans = false;
    for (int i = 0 ; i < lucky_numbers.size() ; i++) {
        const int curr_lucky_number = lucky_numbers[i];
        if (curr_lucky_number > N)
            break;
        else if (N % curr_lucky_number == 0) {
            ans = true;
            break;
        }
    }
    cout << (ans ? "YES" : "NO") << endl;
    return 0;
}