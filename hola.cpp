#include <iostream>
using namespace std;

class Point
{
public:
  double x = 0;
  double y = 0;
  Point(){};

  Point(double a, double b) : x(a),
                              y(b) {}

  Point operator+(const Point &rhs) const;
  Point &operator+=(const Point &rhs);
};

Point Point::operator+(const Point &rhs) const
{
  return Point(x + rhs.x, y + rhs.y);
}

Point &Point::operator+=(const Point &rhs)
{
  x += rhs.x;
  y += rhs.y;
  return *this;
}

int main()
{
  Point up(0, 1);
  Point right(1, 0);
  Point result = up + right;
  cout << "Result is upright (" << result.x << ',' << result.y << ")\n";
}