#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
   int t = 0; 
   long long t1, t2, t3, t4;
   long long total = 0;
   cin >> t;
   for (int i = 0; i < t; ++i) {
      cin >> t1 >> t2 >> t3 >> t4;
      //      total = t1 + t2 + t3;

      cout << (t1/(t1+t2)  ) << endl;
   }
   /*
    Since Chef removes the tickets randomly, we expect the # of each ticket types will remain 
    proportional to the original amount.
    */
}