#include <bits/stdc++.h>
using namespace std;

void dbg_out() { cerr << endl; }
template <typename Head, typename... Tail> void dbg_out(Head H, Tail... T) {
  cerr << ' ' << H;
  dbg_out(T...);
}
#define dbg(...) cerr << "(" << #__VA_ARGS__ << "):", dbg_out(__VA_ARGS__)

int main () {
    long long N , M , K , ans = 0;
    cin >> N >> M >> K;

    vector<long long> applicant(N) , apartment(M);
    for (auto &a : applicant)
        cin >> a;

    for (auto &a : apartment)
        cin >> a;
    
    for (int i = 0 ; i < N ; i++)
        for (int j = 0 ; j < M ; j++) {
            long long currApplicant = applicant[i];
            long long currApartment = apartment[j];
            if (currApartment >= currApplicant - 5 && currApartment <= currApplicant + 5) {
                ans++;
                apartment[j] = -1;
                break;
            }
        }

    cout << ans << endl;

    return 0;
}