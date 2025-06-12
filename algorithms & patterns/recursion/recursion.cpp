#include <bits/stdc++.h>
using namespace std;

void dbg_out() { cerr << endl; }
template <typename Head, typename... Tail> void dbg_out(Head H, Tail... T) {
  cerr << ' ' << H;
  dbg_out(T...);
}
#define dbg(...) cerr << "(" << #__VA_ARGS__ << "):", dbg_out(__VA_ARGS__)

// recursion simply is the fuction calling it self
void recursion (int someValue , bool left = false) {
  if (someValue > 10 || someValue < 0)
    return;
  cout << someValue << endl;
  if (left)
      return recursion(someValue - 1 , left);
  else
      return recursion(someValue + 1 , left);
}

void run_recursion_case () {
  cout << "decreasing case : " << endl;
  recursion(10 , true);
  cout << "increasing case : " << endl;
  recursion(1 , false);
}


string C() {
  return "friends.";
}
string B () {
  return "my " + C();
}

string A () {
  return "hello " + B();
}


/*
  HOW MEMORY WORK in case of those 3 functions a & b & c
  call stack = [] empty
  1 - first we call A()
  call stack = [
  "hello" + B() -> notice we didn't have the value of b yet
  ]
  2 - calling B()
  call stack = [
  "hello" + B()
  "my " + C() -> we didn't have the value of c
  ]
  3 - calling C()
  call stack [
  "hello" + B()
  "my " + C()
  "friends" -> we have the value of c so it pop up
  ]
  call stack [
  "hello" + B()
  "my " + "friends." -> we have the value of B() so it pop up
  ]
  call stakc [
  "hello" + "my " + "friends" -> final result
  ]
*/

void run_A_B_C_case () {
  cout << A();
}


// funtion that inverse string (recursion)

string reverse_string (string s) {
  if (s.length() == 0) return s;
  return reverse_string(s.substr(1)) + s.front();
}

bool palindrom_recursion (string s) {
  if (s.length() == 0)
    return true;
  
  if (s.back() != s.front())
    return false;

  return palindrom_recursion(s.substr(1 , s.length() - 2));
}


// recursion with numbers

string decimal_to_binary (long long number , string res = "") {
  if (number == 0) {
    reverse(res.begin(),res.end());
    return res;
  }

  string temp_res = res + to_string(number % 2);
  return decimal_to_binary(number / 2 , temp_res);
}

long long sum_of_natural_numbers (long long number) {
  if (number == 1)
    return number;
  return number + sum_of_natural_numbers(number - 1);
}

// devide and concer algorithm
// 1 - binary search

int recursive_binary_search (vector<int>& arr , int left , int right , int target) {
  if (left > right)
    return -1;

  const int mid = (left + right) / 2;
  if (arr[mid] == target) return mid;

  if (arr[mid] > target)
    return recursive_binary_search(arr , left , mid - 1 , target);
  else
    return recursive_binary_search(arr , mid + 1 , right , target);
}

long long fib_non_optimal (long long number) {
  if (number == 0) return 1;
  if (number == 1) return 1;

  return fib_non_optimal(number - 1) + fib_non_optimal(number - 2); 
}


// we need map to memorize the call stacks
map < long long , long long > memo;
long long optimal_fib (long long number) {
  // remove call stack redendency
  if (number == 0) return 1;
  if (number == 1) return 1;
  if (memo.find(number) != memo.end()) return memo[number];

  memo[number] = optimal_fib(number - 1) + optimal_fib(number - 2);

  return memo[number];
}


// merge sort recursive

void merge(vector<int>& arr, int left, int mid, int right) {
    int n1 = mid - left + 1; 
    int n2 = right - mid;    
    vector<int> leftArr(n1), rightArr(n2);

    for (int i = 0; i < n1; i++)
        leftArr[i] = arr[left + i];
    for (int i = 0; i < n2; i++)
        rightArr[i] = arr[mid + 1 + i];

    int i = 0, j = 0, k = left; 

    while (i < n1 && j < n2) {
        if (leftArr[i] <= rightArr[j]) {
            arr[k] = leftArr[i];
            i++;
        } else {
            arr[k] = rightArr[j];
            j++;
        }
        k++;
    }

    while (i < n1) {
        arr[k] = leftArr[i];
        i++;
        k++;
    }

    while (j < n2) {
        arr[k] = rightArr[j];
        j++;
        k++;
    }
}

void mergeSort(vector<int>& arr, int left, int right) {
    if (left < right) {
        int mid = left + (right - left) / 2; 

        mergeSort(arr, left, mid);
        mergeSort(arr, mid + 1, right);

        merge(arr, left, mid, right);
    }
}
int main () {
  // run_recursion_case();
  // run_A_B_C_case();
  // cout << reverse_string("kayak") << endl;
  // bool is_kayak_palindrom = palindrom_recursion("kayak") , is_random_palindrom = palindrom_recursion("random");
  // cout << (is_kayak_palindrom ? "kayak palindrom" : "kayan not palindrom") << endl;
  // cout << (is_random_palindrom ? "random palindrom" : "random not palindrom") << endl;
  // cout << decimal_to_binary(2);
  // cout << sum_of_natural_numbers(10);
  // vector <int> arr = {1 , 2 , 3};
  // cout << recursive_binary_search(arr , 0 , 2 , 2) << endl;
}