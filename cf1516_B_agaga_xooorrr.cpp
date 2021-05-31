// Wilmer Gaona Romero
// https://codeforces.com/contest/1516/problem/B
// 30.05.2021

#include <iostream>
#include <algorithm>
#include <vector>
#include <bitset>

using namespace std;

int main () {
  int t; 
  cin >> t;

  while (t--) {
    int n, cum = 0, total = 0, cont = 0;
    cin >> n;

    vector <int> v(n+1);

    for (int i = 1; i <= n; i++) {
      cin >> v[i];
      cum ^= v[i];
    }

    for (int i = 1; i <= n; i++) {
      total ^= v[i];
      if (total == cum) {
        total = 0;
        cont ++;
      }
    }

    if (cont > 1 || cum == 0)
      cout <<"YES" << endl;
    else  
      cout << "NO" << endl;

  }
  return 0;
}