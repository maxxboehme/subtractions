#include <iostream>
#include <algorithm>
#include <climits>
#include <cstring>
#include <vector>
#include <string>

#include "prints.h"

/**
 * Subtract the lesser number from the larger one. If they equal substract one number from the another.
 *
 * @param a 1 <= a <= 10^9
 * @param b 1 <= b <= 10^9
 * @return number of operations till one value reaches 0
 */
inline int calc_subtractions_slow(int a, int b){
   int numOps = 0;
   while(a && b){
      if(a <= b){
         b -= a;
      } else {
         a -= b;
      }
      ++numOps;
   }
   return numOps;
}

inline int calc_subtractions_div(int a, int b){
   int numOps = 0;
   while(a && b){
      if(a < b){
         int temp = b / a;
         numOps += temp;
         b -= (a * temp);
      } else {
         int temp = a / b;
         numOps += temp;
         a -= (b * temp);
      }
   }
   return numOps;
}

inline int calc_subtractions_mod(int a, int b){
   int numOps = 0;
   while(a && b){
      if(a < b){
         numOps += b / a;
         b = b % a;
      } else {
         numOps += a / b;
         a = a % b;
      }
   }
   return numOps;
}

int calc_subtractions(int a, int b){
   return calc_subtractions_div(a, b);
}

void subtractions_solve(std::istream& in, std::ostream& out){
   // turn off synchronization with C I/O
   std::ios_base::sync_with_stdio(false);

   int numPairs, a, b;
   in >> numPairs;
   for(int i = 0; i < numPairs; ++i){
      in >> a >> b;
      int v = calc_subtractions_div(a, b);
      out << v << "\n";
   }
}
