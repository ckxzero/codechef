#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
   int t, a, b;
   cin >> t;
   for (int i = 0; i < t; ++i) {
      cin >> a >> b;
      cout << max(a,b) << " " << (a+b) << endl;
   }
}