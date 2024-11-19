#include "Point.hpp"

static Fixed area(const Point& a, const Point& b, const Point& c) {
    Fixed area = (
        (a.getX() * (b.getY() - c.getY())) +
        (b.getX() * (c.getY() - a.getY())) +
        (c.getX() * (a.getY() - b.getY()))
    ) / Fixed(2);

    if (area < 0)
        return area * Fixed(-1);
    return area;
}

bool bsp(Point const a, Point const b, Point const c, Point const point) {
    Fixed totalArea = area(a, b, c);

    Fixed area1 = area(point, b, c);
    Fixed area2 = area(a, point, c);
    Fixed area3 = area(a, b, point);

    if (area1 == 0 || area2 == 0 || area3 == 0)
        return false;

    return (totalArea == area1 + area2 + area3);
}
