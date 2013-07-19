// using
#include <iostream>
using namespace std;

namespace first
{
  int x = 5;
  int y = 10;
}

namespace second
{
  double x = 3.1416;
  double y = 2.7183;
}

//Notice how in this code, 
//x (without any name qualifier) refers to first::x whereas y refers to second::y, 
//exactly as our using declarations have specified. 
//We still have access to first::y and second::x using their fully qualified names.
int main () {
  using first::x;
  using second::y;

  cout << x << endl;
  cout << y << endl;

  cout << first::y << endl;
  cout << second::x << endl;

  return 0;
}

