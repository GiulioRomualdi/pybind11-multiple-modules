#ifndef LINE_H
#define LINE_H

#include "point.h"

class Line {
private:
    Point m_p1;
    Point m_p2;
public:
    Line(Point p1, Point p2);
};

#endif
