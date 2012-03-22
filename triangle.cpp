/*
 *  triangle.cpp
 *
 *  Created on: 22 Mar 2012
 *  Author: tamer
 */

#include "triangle.h"

#include <math.h>
#include <cairomm/context.h>

Triangle::Triangle(double av,double bv,double cv)
{
    a = new double;
    b = new double;
    c = new double;
    *a = av;
    *b = bv;
    *c = cv;
}

Triangle::~Triangle()
{
    delete a;
    delete b;
    delete c;
}

bool Triangle::on_draw(const Cairo::RefPtr<Cairo::Context>& cr)
{
  cr->set_line_width(1.0);

  double init = 10.0;
  //*a = *a + init;
  double x = (- *b * *b + *a * *a + *c * *c)/(2 * *a);
  double y = sqrt((*c * *c) - (x * x));

  cr->move_to(init, init);
  cr->line_to(*a, init);
  cr->line_to(x, y);
  cr->line_to(init, init);
  cr->stroke();

  return true;
}
