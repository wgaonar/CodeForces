#include <iostream>
#include <vector>

using namespace std;

void DisplayVector(vector<int>& v)
{
  for (auto value: v)
  {
    cout << value << " ";
  }
  cout << endl;
}

void DisplayMatrix (vector<vector<int>>& m)
{
  for (size_t i = 0; i < m.size(); i++)
  {
    for (size_t j = 0; j < m.at(i).size(); j++)
    {
      cout << m.at(i).at(j) << " ";
    }
    cout << endl;
  }
}

void SearchPosition (vector<vector<int>>& m, int& r, int& c)
{
  cout  << "Element at position (" << r << "," << c << "): " 
        << m.at(r).at(c) << endl;
}

int main()
{
  cout << "Enter the number of rows: ";
  int rows {0};
  cin >> rows;

  vector<vector <int>> matrix (rows);
  vector <int> firstRow {1};
  matrix.at(0) = firstRow;

  vector <int> last {1,1};
  vector <int> actual (last);

  for (size_t i = 1; i < rows; i++)
  {
    matrix.at(i) = actual;

    actual = vector {1};
    for (size_t j = 0; j < last.size() - 1; j++)
    {
      actual.push_back(last.at(j)+last.at(j+1));
    }
    actual.push_back(1);
    last = actual;
  }
  
  DisplayMatrix(matrix);

  
  cout << "\nEnter the row and column positions to find: ";
  int r {0}, c {0};
  cin >> r >> c;

  SearchPosition (matrix, r, c);

  int array1[14] = {3,6,1,6,4,2,1,3,7,2,5,7,5,4};
  int size = 14;

  for (size_t i = 0; i < size - 1; i++)
  {
    for (size_t j = 0; j < size - 1; j++)
    {
      if (array1[j] > array1[j+1])
      {
        int temp = array1[j];
        array1[j] = array1[j+1];
        array1[j+1] = temp;
      }
    }
  }
  
  for (size_t i = 0; i < size; i++)
  {
    cout << array1[i] << " ";
  }
  cout << endl;
  
  return 0;
}