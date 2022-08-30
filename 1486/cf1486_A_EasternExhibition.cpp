// Wilmer Gaona Romero
// https://codeforces.com/problemset/problem/1486/B
// 29.08.2022

#include <iostream>
#include <vector>

using namespace std;

int main () 
{
  int T; cin >> T;
  while (T--)
  {
    int N; cin >> N;
    // cout << N << endl;
    vector <long long> x(N);
    vector <long long> y(N);
    for (size_t i = 0; i < N; i++) 
    {
      cin >> x.at(i) >> y.at(i);
      // cout << x.at(i) << " " << y.at(i) << endl;
    } 
    sort(x.begin(), x.end());
    sort(y.begin(), y.end());
    if (N % 2 == 1)
    {
      cout << 1 << endl;
    }
    else
    {
      long long answer = (x.at(N/2)-x.at(N/2-1)+1) * (y.at(N/2)-y.at(N/2-1)+1);
      cout << answer << endl;
    }
  }
  
  return 0;
}