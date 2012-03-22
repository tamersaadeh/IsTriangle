/*
 *  triangle.h
 *
 *  Created on: 22 Mar 2012
 *  Author: tamer
 */

#ifndef GTKMM_EXAMPLE_MYAREA_H
#define GTKMM_EXAMPLE_MYAREA_H

#include <gtkmm/drawingarea.h>

class Triangle : public Gtk::DrawingArea
{
    double *a, *b, *c;
public:
  Triangle(double, double, double);
  virtual ~Triangle();

protected:
  //Override default signal handler:
  virtual bool on_draw(const Cairo::RefPtr<Cairo::Context>& cr);
};

#endif // GTKMM_EXAMPLE_MYAREA_H
