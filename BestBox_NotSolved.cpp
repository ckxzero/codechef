#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

/* math */
double quadratic(int a, int b, int c) {
   sqrt(b*b - 4*a*c)/(2*a);
}

int main() {
   int t = 0;
   int w = 0;
   int p = 0;
   double x, z;
   double volume;
   for (int i = 0; i < t; ++i) {
      cin >> w >> p;
      
      volume = x * x * z;
      volume = (double) ( (int) (volume * 100) / 100.0); // round to 2 digit
      cout << volume << endl;
   }
   /*
    8x + 4z == w  |  x = w/8 - z/2
    2x^2 + 4xz == p
    
    
    2( (w/8 - z/2)*(w/8 - z/2) ) + 4z(w/8 z/2) = p
    2( w^2/64 - zw/8 + z^2/4 ) + zw/2 + 2z^2 = p
    w^2/32 - zw/4 + z^2/2 + zw/2 + 2z^2 = p
    w^2 - 8zw + 16z^2 + 16zw + 64z^2 = 32p
    80z^2 + 8zw = 32p - w^2
    */
}
