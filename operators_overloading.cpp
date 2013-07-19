// vectors: overloading operators example
#include <iostream>
using namespace std;

// Overloadable operators
// +    -    *    /    =    <    >    +=   -=   *=   /=   <<   >>
// <<=  >>=  ==   !=   <=   >=   ++   --   %    &    ^    !    |
// ~    &=   ^=   |=   &&   ||   %=   []   ()   ,    ->*  ->   new 
// delete    new[]     delete[]
class CVector {
  public:
    int x,y;
    CVector () {};
    CVector (int,int);
    CVector operator + (CVector);
    CVector& operator = (const CVector&);
};

CVector::CVector (int a, int b) {
  x = a;
  y = b;
}

CVector CVector::operator+ (CVector param) {
  CVector temp;
  temp.x = x + param.x;
  temp.y = y + param.y;
  return (temp);
}

CVector& CVector::operator= (const CVector& param)
{
  x=param.x;
  y=param.y;
  return *this;
}

int main () {
  CVector a (3,1);
  CVector b (1,2);
  CVector c,d;
  c = a + b;
  d = c;
  cout << c.x << "," << c.y << endl;
  cout << d.x << "," << d.y << endl;

  return 0;
}

