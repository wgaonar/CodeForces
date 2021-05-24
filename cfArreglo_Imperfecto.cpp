// Wilmer Gaona Romero
// 23.05.2021

#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main () {
  int t;
  cin >> t;

  while (t--) {
    int n;
    cin >> n;

    vector <long long int> a(n);

    for (auto &item : a) {
      cin >> item;
    }

    const int maxN = 10001;
    vector <long long int> squares(maxN);

    for(int i = 1; i*i < maxN; i++ ) {
      squares[i*i] = 1;
    }

    bool found = false;
    for (const auto &n : a) {
      if (squares[n] == 0) {
        found = true;
        break;
      }
    }

    if (found) {
      cout << "YES" << endl;
    } else {
      cout << "NO" << endl;
    }
  }
  return 0;
}