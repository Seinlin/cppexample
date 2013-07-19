// overloading class constructors
#include <iostream>
using namespace std;


// constructor can also be overloaded with more than one function that have the same name but different types or number of parameters.
class CRectangle {
    int width, height;
  public:
    CRectangle ();
    CRectangle (int,int);
    int area (void) {return (width*height);}
};

CRectangle::CRectangle () {
  width = 5;
  height = 5;
}

CRectangle::CRectangle (int a, int b) {
  width = a;
  height = b;
}

int main () {
  CRectangle rect (3,4);
  CRectangle rectb;

  cout << "rect area: " << rect.area() << endl;
  cout << "rectb area: " << rectb.area() << endl;

  return 0;
}

