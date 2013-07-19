// overloading class constructors
#include <iostream>
using namespace std;


// an explicit constructor is declared, thus replacing the default constructor.
class CRectangle {
    int width, height;

  public:
    CRectangle (int,int);
    CRectangle (const CRectangle&);
    int area (void) {return (width*height);}
};

CRectangle::CRectangle (int a, int b) {
  width = a;
  height = b;
}

// The copy constructor and the copy assignment operator copy all the data contained in another object to the data members of the current object.
CRectangle::CRectangle (const CRectangle& r) {
  width = r.width;
  height = r.height;
}

int main () {
  CRectangle rect (3,4);
  CRectangle rectb (rect); //copy from rect

  cout << "rect area: " << rect.area() << endl;
  cout << "rectb area: " << rectb.area() << endl;

  return 0;
}

