#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
   int t, n, k;
   int target;
   vector<int> a;
   int temp;
   cin >> t;
   for (int i = 0; i < t; ++i) {
      cin >> n;
      for (int j = 0; j < n; ++j) {
         cin >> temp;
         a.push_back(temp);
      }
      cin >> k;
      target = a[k-1];
      
      /* cheap way */
      sort(a.begin(), a.end()); // default: <
      for (int j = 0; j < n; ++j) {
	if (target == a[j]) {
            cout << (j+1) << endl;
            break;
         }
      }
      a.clear();

      /* algorithm to find the ith order statistics */
      
   }
}
