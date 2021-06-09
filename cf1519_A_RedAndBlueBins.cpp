// Wilmer Gaona Romero
// https://codeforces.com/contest/1519/problem/A
// 09.06.2021

#include <iostream>

typedef long long ll;

using namespace std;

int main () {
  int t; 
  cin >> t;

  while (t--) {
    ll r, b, d;
    cin >> r, cin >> b, cin >> d;

    ll difference1, difference2;
    if (r >= b) {
      difference1 = r-b;
      difference2 = b*d;
    }
    else {
      difference1 = b-r;
      difference2 = r*d;
    }
    cout << (difference1<=difference2 ? "YES\n" : "NO\n");
  }
  return 0;
}