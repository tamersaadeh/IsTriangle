/*
 *  main.cpp
 *
 *  Created on: 22 Mar 2012
 *  Author: tamer
 */

#include "triangle.h"
#include "libtriangle.h"

#include <iostream>
#include <gtkmm/main.h>
#include <gtkmm/window.h>

using namespace std;

int main(int argc, char** argv)
{
    double a, b, c;
	puts("Please enter three values to check if they form a triangle:");
	scanf("%lf %lf %lf", &a, &b, &c);

	if (isATriangle(a, b, c)) {

        Gtk::Main kit(argc, argv);
        Gtk::Window win;

        Triangle tri (a * 100, b * 100, c * 100);
        win.set_title("Triangle");
        win.add(tri);

        tri.show();
        Gtk::Main::run(win);

	} else {
		// always want to exit with error if it is not a triangle
		puts("ERROR: The given values do not form a triangle!");
		return 1;
	}

	return 0;
}
