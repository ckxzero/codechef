#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
  int t = 0;
  cin >> t;
  int length = 0;
  for (int i = 0; i < t; ++i) {
    cin >> length;
    if (length % 2 == 0) cout << length << endl;
    else cout << (length-1) << endl;
  }
}
