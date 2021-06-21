// Wilmer Gaona Romero
// https://codeforces.com/contest/1521/problem/A
// 20.06.2021

#include <iostream>
#include <string>

using namespace std;

typedef long long int ll;

int main () {
  int t; cin >> t;
  while (t--) {
    ll A; cin >> A;
    ll B; cin >> B;

    if (B == 1) {
      cout << "NO\n";
      continue; // Jump to the beggining of the while for the next iteration skipping the next code of the iteration
    }

    ll x = A;
    ll y = A*B;
    ll z = A*(B+1);
    cout << "YES\n";
    cout << x << " " << y << " " << z << endl;

    // cout << (flag ? "NO\n" : "YES\n");
  }
  return 0;
}