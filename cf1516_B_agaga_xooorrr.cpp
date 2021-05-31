// Wilmer Gaona Romero
// https://codeforces.com/contest/1516/problem/B
// 30.05.2021

#include <iostream>
#include <algorithm>
#include <vector>
#include <bitset>

using namespace std;

typedef long long int ll;

int main () {
  int t;
  cin >> t;

  while (t--) {
    int n;
    cin >> n;

    vector <ll> a(n);

    for (auto &item : a) {
      cin >> item;
    }

    vector <ll> cum(n+1);

    for (ll i = 1; i <= n; ++i) {
      cum[i] = cum[i-1] ^ a[i];
      // convert to binary
      /* 
        string binary = bitset<32>(cum[i]).to_string();
        cout << binary << endl; 
      */
    }

    bool found = !cum[n];
    for (ll i = 1; i <=n; ++i) {
      for (ll j = i + 1; j < n; ++j) {
        found |= (cum[i] == (cum[i] ^ cum[j]) &&
                  cum[i] == (cum[j] ^ cum[n]));
        // cout << "found: " << found << endl;
      }
    }

    if (found)
      cout <<"YES" << endl;
    else  
      cout << "NO" << endl;

  }
  return 0;
}