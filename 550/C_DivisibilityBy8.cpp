// Wilmer Gaona Romero
// https://codeforces.com/problemset/problem/550/C
// 05.06.2022

#include <iostream>

using namespace std;

int main () 
{
  string n;
  cin >> n;

  int ans {-1};
  for (size_t i = 0; i < n.size(); i++)
  {
    if (ans != -1)
      break;
    int x = n.at(i)-'0';
    if (x % 8 == 0)
    {
      ans = x;
      break;
    }
    for (size_t j = i + 1 ; j < n.size(); j++)
    {
      if (ans != -1)
        break;
      x = (n.at(i) - '0') * 10 + n.at(j)-'0';
      if (x % 8 == 0)
      {
        ans = x;
        break;
      }
      for (size_t k = j + 1 ; k < n.size(); k++)
      {
        if (ans != -1)
          break;
        x = (n.at(i) - '0') * 100 + (n.at(j) - '0') * 10 + n.at(k) - '0';
        if (x % 8 == 0)
        {
          ans = x;
          break;
        }
      }
    }
  }
  
  if (ans != -1)
    cout << "YES\n" << ans << endl;
  else
    cout << "NO" << endl;
  return 0;
}