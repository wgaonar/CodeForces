#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>

using namespace std;

int main()
{

  int M[26][13] {{19, -9, -16, -6, -35, 5, 6, 23, 42, 22, 18, -32, -5},
                  {46, -34, -4,-48,15,4,13,16,-28,-8,-24,34,31},
                  {-43,11,8,-18,-7,-45,1,-19,-45,48,-13,-21,39},
                  {-24,8,-46,-22,20,-21,-21,26,18,-35,-8,8,-10},
                  {-29,21,-19,6,10,-47,17,-21,-10,44,35,16,-21},
                  {35,-9,-28,-27,-39,-42,-34,-49,-45,-19,21,30,-42},
                  {-17,-23,-48,-10,-39,21,-21,-49,-14,-35,-17,-28,-47},
                  {-10,-14,1,-47,26,-43,47,-35,-23,-9,16,-30,26},
                  {-49,13,6,8,37,38,9,-26,29,-3,45,44,44},
                  {-20,-38,-29,-37,11,8,-43,-42,29,-46,-25,-32,-47},
                  {10,27,26,12,21,35,-48,-30,-44,4,45,-28,37},
                  {-2,-13,-10,10,41,-1,-47,44,11,40,6,-37,-19},
                  {-26,-2,-45,-3,22,47,47,20,29,-16,-42,-1,26},
                  {46,33,-22,0,-14,-26,-45,25,-22,-35,-33,22,-3},
                  {-18,-18,-23,10,43,26,48,25,-14,-50,-18,-14,-33},
                  {7,-27,44,-49,18,-28,-2,42,-43,-16,-8,-50,-35},
                  {-24,48,38,-46,-49,3,-35,-3,-26,-25,17,28,-10},
                  {-2,-24,-23,30,-32,-49,47,-39,-37,20,-24,-23,-49},
                  {48,44,-49,-28,41,-48,11,-29,39,29,42,32,-37},
                  {7,28,-3,42,-8,-15,-40,6,-38,-48,35,41,7},
                  {24,-34,33,-40,-17,43,40,47,47,-24,14,-5,27},
                  {-12,33,48,31,2,-31,-40,10,17,0,26,-46,-40},
                  {-21,-9,-11,-19,46,13,19,37,22,7,-6,-20,47},
                  {21,-49,46,-16,3,-14,40,-29,45,-33,11,38,-4},
                  {-24,-42,18,-11,-16,-41,10,41,-14,22,39,-43,20},
                  {-42,13,-39,-12,41,-14,-28,9,-2,-24,-21,-15,-5}};

  int sum {0};
  int m {26};
  int n{13};

  sum = 0;
  int u = m;
  int v = n;
  for (size_t j = 0; j < v; j++)
  {
    sum += M[0][j] + M[u][j];
  }
  for (size_t i = 0; i < u; i++)
  {
    sum += M[i][0] + M[i][v];
  }

  sum = 0;
  u = m;
  v = n-1;
  for (size_t j = 0; j < v; j++)
  {
    sum += M[0][j] + M[u][j];
  }
  for (size_t i = 0; i < u; i++)
  {
    sum += M[i][0] + M[i][v];
  }

  sum = 0;
  u = m-1;
  v = n;
 

  sum = 0;
  u = m-1;
  v = n;

  

  


  return 0;
}
