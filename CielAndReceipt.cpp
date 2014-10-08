#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

/* greedy */
int main() {
  int t;
  cin >> t;
  int p = 0;
  int minDishes = 0;
  for (int i = 0; i < t; ++i) {
    minDishes = 0;
    cin >> p;
    for (int i = 11; i >=0; --i) {
      if (pow(2,i) <= p) {
	p = p - pow(2,i);
	minDishes++;
	i++; // may be used again
      }
      if (p == 0) break;
    }
    cout << minDishes << endl;
  }
  /*
    candidate set = items in menu
    feasiblity function = cost <= p
    selection function = max price <= p
    objection function = sum of least # items whose price equal p
    solution = cost = p
  */

}
