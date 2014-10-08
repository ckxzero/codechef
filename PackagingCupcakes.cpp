#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
   int t, n;
   cin >> t;
   for (int i = 0; i < t; ++i) {
      cin >> n;
      cout << (n/2 + 1) << endl;
   }
}