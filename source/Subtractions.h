
#ifndef __SUBTRACTIONS__
#define __SUBTRACTIONS__

#include <iostream>

/**
 * Solves the CodeForces 168B: Burnining Midnight Oil Problem.
 * @param in A std::stream with "n k" formating
 * @param out A std::stream for outputing results
 */
void subtractions_solve(std::istream& in, std::ostream& out);

/**
 * Solves the CodeForces 168B: Burnining Midnight Oil Problem using
 * a binary search method.
 *
 * @param n lines of code. 1 <= n <= 10^9
 * @param k 2 <= k <= 10
 * @return minumum allwable value v
 */
int calc_subtractions(int n, int k);
#endif
