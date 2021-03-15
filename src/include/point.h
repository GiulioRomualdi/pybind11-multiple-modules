#ifndef POINT_H
#define POINT_H

class Point {

private:
    double m_x;
    double m_y;
    double m_z;

public:
    Point()= default;
    Point(double x, double y, double z);

    double getX() const;
    double getY() const;
    double getZ() const;
};


#endif // POINT
