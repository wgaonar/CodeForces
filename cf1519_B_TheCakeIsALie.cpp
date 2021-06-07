// Wilmer Gaona Romero
// https://codeforces.com/contest/1519/problem/B
// 07.06.2021

#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main () {
  int t; 
  cin >> t;

  while (t--) {
    int n, m, k;
    cin >> n, cin >> m, cin >> k;

    cout << ((k==(m-1)+(n-1)*m) ? "YES\n" : "NO\n");

  }
  return 0;
}