// abstract class
#include <iostream>
using namespace std;

class CPolygon {
  protected:
    int width, height;

  public:
    void set_values (int a, int b)
      { width=a; height=b; }
    virtual int area () = 0; //pure virtual function
};

class CRectangle: public CPolygon {
  public:
    int area ()
      { return (width * height); }
};

class CTriangle: public CPolygon {
  public:
    int area ()
      { return (width * height / 2); }
};

int main () {
  CRectangle rect;
  CTriangle trgl;
  //this is not valid due to the abstract class
  //CPolygon poly;
  CPolygon * ppoly1 = &rect;
  CPolygon * ppoly2 = &trgl;
  //CPolygon * ppoly3 = &poly;
  ppoly1->set_values (4,5);
  ppoly2->set_values (4,5);
  //ppoly3->set_values (4,5);
  cout << ppoly1->area() << endl;
  cout << ppoly2->area() << endl;
  //cout << ppoly3->area() << endl;

  return 0;
}

