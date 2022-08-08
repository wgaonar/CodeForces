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

    ll mi = min(r,b); ll ma = max(r,b); 
    cout << ((ma-mi <= mi*d) ? "YES\n" : "NO\n");
  }
  return 0;
}