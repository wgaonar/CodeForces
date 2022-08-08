// Wilmer Gaona Romero
// https://codeforces.com/contest/1536/problem/A#
// 01.08.2021

#include <iostream>

using namespace std;

typedef long long int ll;
bool neg;

int main () {
  int t; cin >> t;
  while (t--) {
    int n; cin >> n;
    int b;
    neg = false;
    for (int i = 0; i < n;i++)
    {
      cin >> b;
      if (b < 0) neg = true;
    }
    if (neg == true)
      cout << "NO\n";
    else
    {
      cout << "YES\n101\n";
      for (size_t i = 0; i <= 100; i++) cout << i << " ";
      cout << "\n";
    } 
  }
  return 0;
}