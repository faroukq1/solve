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

long long decimal_to_binary (long long number , long long mod = 0) {
  if (number == 0)
    return mod;
  
  long long new_mod = (mod * 10) + number % 2;

  return decimal_to_binary(number / 2 , new_mod);
}

int main () {
  // run_recursion_case();
  // run_A_B_C_case();
  // cout << reverse_string("kayak") << endl;
  // bool is_kayak_palindrom = palindrom_recursion("kayak") , is_random_palindrom = palindrom_recursion("random");
  // cout << (is_kayak_palindrom ? "kayak palindrom" : "kayan not palindrom") << endl;
  // cout << (is_random_palindrom ? "random palindrom" : "random not palindrom") << endl;

  cout << decimal_to_binary(2);
}