// Wilmer Gaona Romero
// https://codeforces.com/contest/1520/problem/A
// 13.06.2021

#include <iostream>
#include <string>

using namespace std;

int main () {
  int t; cin >> t;
  while (t--) {
    int n; cin >> n;
    string str;

    // Read the raw characters from input
    for (int i = 0; i < n; i++) {
      char c; cin >> c;
      str += c;
    }

    // Remove the consecutive letters
    string dst;
    dst.push_back(str[0]);
    for (auto it = str.cbegin() + 1; it != str.cend(); it++) {
      if (dst.back() != *it) {
        dst.push_back(*it);
      }
    }

    // Search for the character
    bool flag = false;
    for (size_t i = 0; i < dst.length(); i++) {
      size_t found = dst.find(dst[i], i + 1);
      if (found != string::npos) {
        flag = true;
        break;
      }
    }
    cout << (flag ? "NO\n" : "YES\n");
  }
  return 0;
}