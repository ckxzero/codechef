#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

double minDist(int a, int b) {
  if (a > b) return sqrt(a*a - b*b);
  return sqrt(b*b - a*a);
}

double maxDist(int a, int b) {
  return sqrt(a*a + b*b);
}

int main() {
  int t; // test cases
  int a, b;
  double min, max;
  cin >> t;
  for (int i = 0; i < t; ++i) {
    cin >> a >> b;
    min = minDist(a,b);
    max = maxDist(a,b);
    cout << min << " " << max << endl;
  }

}
