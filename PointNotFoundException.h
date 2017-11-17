#include <exception>
using namespace std;

class PointNotFoundException: public exception
{
  virtual const char* what() const throw()
  {
    return "The point is outside the curve";
  }
};
