#include <point.h>

Point::Point (double x, double y, double z){
    m_x = x;
    m_y = y;
    m_z = z;
}

double Point::getX() const
{
    return m_x;
}

double Point::getY() const
{
    return m_y;
}

double Point::getZ() const
{
    return m_z;
}
