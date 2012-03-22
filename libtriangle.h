/*
 *  libtriangle.h
 *
 *  Created on: 22 Mar 2012
 *  Author: tamer
 */

/**
 * Checks if a given double is greater than zero
 */
int greaterThanZero(double x) {
	if (x > 0)
		return 1;
	return 0;
}

/**
 * Checks if a, b, c are all greater than zero.
 * Checks if a < b + c i.e. b + c - a > 0.
 * (repeated with different combinations)
 */
int isATriangle(double a, double b, double c) {
	if (greaterThanZero(a) && greaterThanZero(b) && greaterThanZero(c)
			&& greaterThanZero(b + c - a) && greaterThanZero(c + a - b)
			&& greaterThanZero(b + a - c))
		return 1;
	return 0;
}

/**
 * Checks if a*a = b*b + c*c is true or not.
 * (repeated with different combinations)
 */
int isRectangular(double a, double b, double c) {
	if ((a * a == b * b + c * c) || (b * b == a * a + c * c) || (c * c == b * b
			+ a * a))
		return 1;
	return 0;
}
