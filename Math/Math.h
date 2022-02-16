#pragma once

/* factorial
* input: int n (operand)
* output: int result (n!)
* 
* time complexity: O(n)
*/
double factorial(int n) { // TODO: Replace with templated function
	if (n == 1) {
		return 1;
	}
	else {
		return n * factorial(n - 1);
	}

}

/* binomialCoefficient
* input: int n (top); int k (bottom)
* output: double result (the resulting binomial coefficient)
* 
* time complexity: O(n)
*/
double binomialCoefficient(int n, int k) {
	return (factorial(n) / (factorial(k) * factorial(n - k)));
}



