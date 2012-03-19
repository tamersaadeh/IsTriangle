/*
 *  IsTriangle
 *
 *  Created on: 19 Mar 2012
 *  Author: tamer
 */

#include <stdio.h>

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

int main() {
	double a, b, c;
	puts("Please enter three values to check if they form a triangle:");
	scanf("%lf %lf %lf", &a, &b, &c);

	if (isATriangle(a, b, c)) {

		// classify the triangle if it's: equilateral, isosceles, or scalene.
		if (a == b) {
			if (b == c) {
				puts("The values given form an equilateral triangle.");
			} else {
				puts("The values given form an isosceles triangle.");
			}
		} else {
			if (b == c) {
				puts("The values given form an isosceles triangle.");
			} else {
				if (a == c) {
					puts("The values given form an isosceles triangle.");
				} else {
					puts("The values given form a scalene triangle.");
				}
			}
		}

		// classify the triangle if it's: a retangular triangle or not.
		if (isRectangular(a, b, c)) {
			puts("The given values form a retangular triangle.");
		} else {
			puts("The given values do not form a retangular triangle.");
		}

	} else {
		// always want to exit with error if it is not a triangle
		puts("ERROR: The given values do not form a triangle!");
		return 1;
	}

	return 0;
}
