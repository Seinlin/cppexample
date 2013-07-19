// constructors and derived classes
#include <iostream>
using namespace std;

class mother {
  public:
    mother ()
      { cout << "mother: no parameters\n"; }
    mother (int a)
      { cout << "mother: int parameter\n"; }
};

class daughter : public mother {
  public:
    daughter () {}
    daughter (int a)
      { cout << "daughter: int parameter\n"; }
};

class son : public mother {
  public:
    son () : mother()
      { cout << "son: no parameters\n"; }
    son (int a) : mother (a)
      { cout << "son: int parameter\n"; }
};

int main () {
  cout << "\nmary:\n";
  mother mary;
  cout << "\ncynthia:\n";
  daughter cynthia (0);
  cout << "\nlinda:\n";
  daughter linda;
  cout << "\ndaniel:\n";
  son daniel(0);
  cout << "\ndavid:\n";
  son david;
  
  return 0;
}

