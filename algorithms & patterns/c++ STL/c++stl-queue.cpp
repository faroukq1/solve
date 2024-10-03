#include <bits/stdc++.h>
using namespace std;

void dbg_out() { cerr << endl; }
template <typename Head, typename... Tail> void dbg_out(Head H, Tail... T) {
  cerr << ' ' << H;
  dbg_out(T...);
}
#define dbg(...) cerr << "(" << #__VA_ARGS__ << "):", dbg_out(__VA_ARGS__)

int main () {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    // queue data strucutre

    // cocept first in first out

    // syntax queue < type > name

    queue < int > q;
    for (int i = 0 ; i < 5 ; i++)
    	q.push(i);

    // how to get the back of last element of queue
    cout << "last element : " << q.back() << endl;

    // queue need to empty it
    // queue element
    while (!q.empty()) {
    	cout << q.front() << ' ';
    	q.pop();
    }
    cout << endl;

    // deque : like queue but we can insert from the beginning and the end
    deque < int > dq;

    for (int i = 0 ; i < 10 ; i++)
    	dq.push_back(i);
    for (int i = 0 ; i < 10 ; i++)
    	dq.push_front(i);

    priority_queue < int > pq;

    for (int i = 0 ; i < 10 ; i++)
    	pq.push(i);


    while (!pq.empt()) {
    	cout << pq.top() << endl;
    	pq.pop();
    }

    // stack data structure opposite of queue
    // last int first out

    stack < int > s;

    for (int i = 0 ; i < 10 ; i++)
    	s.push(i);


    while (!s.empty()) {
    	cout << s.top() << endl;
    	s.pop();
    } 


    

    #ifndef ONLINE_JUDGE
    function<bool(string,string)> compareFiles = [](string p1, string p2)->bool {
        std::ifstream file1(p1);
        std::ifstream file2(p2);
        if (!file1.is_open() || !file2.is_open()){
            return false;
        }
        cerr<<"checking.... ";
        std::string line1, line2;
        while (std::getline(file1, line1) && std::getline(file2, line2)) {
            if (line1 != line2)
                return false;
        }
        return file1.eof() && file2.eof();
    };
    bool check = compareFiles("output.txt","expected.txt");
    if (check) cerr<<"OK\n";
    else cerr<<"Failed!\n";
#endif
}