// Wilmer Gaona Romero
// https://codeforces.com/group/WWgO08JwTh/contest/369508/problem/D
// 22.05.2022

#include <iostream>
#include <vector>

using namespace std;

int main () 
{
  int n; cin >> n;

  vector<vector<vector<int>>> A(n, vector<vector<int>>(n,vector<int>(n)));
  for (size_t i = 0; i < n; i++)
  {
    for (size_t j = 0; j < n; j++)
    {
      for (size_t k = 0; k < n; k++)
      {
        cin >> A[i][j][k];
      }
    }
  }

  // Precalculate
  for (size_t i = 0; i < n; i++)
  {
    for (size_t j = 0; j < n; j++)
    {
      for (size_t k = 0; k < n; k++)
      {
        if (i > 0)
        {
          A[i][j][k] += A[i-1][j][k];
        }
        if (j > 0)
        {
          A[i][j][k] += A[i][j-1][k];
        }
        if (k > 0)
        {
          A[i][j][k] += A[i][j][k-1];
        }
        if (i > 0 and j > 0)
        {
          A[i][j][k] -= A[i-1][j-1][k];
        }
        if (i > 0 and k > 0)
        {
          A[i][j][k] -= A[i-1][j][k-1];
        }
        if (j > 0 and k > 0)
        {
          A[i][j][k] -= A[i][j-1][k-1];
        }
        if (i > 0 and j > 0 and k > 0)
        {
          A[i][j][k] += A[i-1][j-1][k-1];
        }
      }
    }    
  }

  int maxSubCube = 0;
  for (size_t i = 0; i < n; i++)
  {
    for (size_t j = 0; j < n; j++)
    {
      for (size_t k = 0; k < n; k++)
      {
        for (size_t u = 0; u < n; u++)
        {
          for (size_t v = 0; v < n; v++)
          {
            for (size_t w = 0; w < n; w++)
            {
              int subCube = A[u][v][w];
              if (i > 0)
              {
                subCube -= A[i-1][v][w];
              }
              if (j > 0)
              {
                subCube -= A[u][j-1][w];
              }
              if (k > 0)
              {
                subCube -= A[u][v][k-1];
              }
              if (i > 0 and j > 0)
              {
                subCube += A[i-1][j-1][w];
              }
              if (i > 0 and k > 0)
              {
                subCube += A[i-1][v][k-1];
              }
              if (j > 0 and k > 0)
              {
                subCube += A[u][j-1][k-1];
              }
              if (i > 0 and j > 0 and k > 0)
              {
                subCube -= A[i-1][j-1][k-1];
              }
              maxSubCube = max(maxSubCube, subCube);
            }
          }
        }
      }
    }
  }
  cout << maxSubCube << endl;
  return 0;
}