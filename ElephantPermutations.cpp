#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
   /*
    inversion = all possible (i, j): 1 ≤ i < j ≤ N such that a[i] > a[j]
    local inversions = all possible (i, j) such that a[i] > a[i+1]
    */
   int t, n;
   int a[100];
   int inversions, local;
   bool isExamined;
   cin >> t;
   for (int i = 0; i < t; ++i) {
      cin >> n;
      for (int j = 0; j < n; ++j) {
         cin >> a[j];
      }
      inversions = 0;
      local = 0;
      for (int j = 0; j < n-1; ++j) {
         isExamined = false;
         for (int k = j+1; k < n; ++k) {
            if (a[j] > a[k]) ++inversions;
            if (isExamined == false) {
               if (a[j] > a[j+1]) ++local;
               isExamined = true;
            }
         }
      }
      if (local == inversions) cout << "YES" << endl;
      else cout << "NO" << endl;
   }
}