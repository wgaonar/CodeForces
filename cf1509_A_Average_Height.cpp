#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int testCases = 0, n;

// Display elements in container
template <typename T>
void DisplayContainer (const T &container)
{
  for (auto element = container.cbegin(); 
        element != container.cend(); 
        element++)
      cout << *element << ' ';
  cout << endl;
}

// Unary predicate
bool IsOdd (const int& number) {
  return ((number % 2) != 0);
}

vector<vector<int>> heightsVector;

int main() {
  cin >> testCases;
  for (int t = 0; t < testCases; t++) {
    cin >> n;
    vector<int> v1;
    for (int i = 0; i < n; i++) {
      int height;
      cin >> height;
      v1.push_back(height);
    }
    partition(v1.begin(),v1.end(),IsOdd);
    heightsVector.push_back(v1);
  }

  for (int i = 0; i < heightsVector.size(); i++) {
    for (int j = 0; j < heightsVector[i].size(); j++)
      cout << heightsVector[i][j] << ' ';
    cout << endl;
  } 
  return 0;
}
