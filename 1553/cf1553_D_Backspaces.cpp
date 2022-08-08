// Wilmer Gaona Romero
// https://codeforces.com/problemset/problem/1553/D
// 06.08.2022

#include <iostream>

using namespace std;

int main () 
{
  int N; cin >> N;
  while (N--) 
  {
    string s; cin >> s;
    string t; cin >> t;
    // cout << "s: " << s << " t: " << t << endl; 
    int matches {0};
    int n = s.size();
    int m = t.size();
    // cout << "n: " << n << " m: " << m << endl;
    int i = n - 1, j = m - 1;
    while (i >= 0 && j >= 0)
    {
      if(s.at(i) == t.at(j))
      {
        matches++;
        // cout << "s[" << i << "]" << " -> " <<  "t[" << j << "]\n";
        i--;
        j--;
        continue;
      }
      i -= 2;
    }
    
    if (matches == m)
    {
      cout << "YES\n";
    }
    else
    {
      cout << "NO\n";
    }
  }  
  return 0;
}