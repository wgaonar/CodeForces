// Wilmer Gaona Romero
// https://codeforces.com/contest/1537/problem/A
// 15.08.2021

#include <iostream>
#include <vector>
#include <string>

using namespace std;

typedef long long int ll;

int main () {
  int t; cin >> t;
  while (t--) {
    int n; cin >> n;
    vector<ll> a;
    int k , sum=0; 
    for (size_t i = 0; i < n; i++) 
    {
      cin >> k;
      a.push_back(k);
      sum += k;
    }
    if (sum < n) cout << "1\n";
    else cout << sum - n << "\n"; 
  }
  return 0;
}