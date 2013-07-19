// using namespace example
#include <iostream>
using namespace std;

namespace first
{
  int x = 5;
}

namespace second
{
  double x = 3.1416;
}

//declare alternate names for existing namespaces
namespace fff = first;

//using and using namespace have validity only in the same block in which they are stated or in the entire code if they are used directly in the global scope.
int main () {
  {
    using namespace first;
    cout << x << endl;
  }
  {
    using namespace second;
    cout << x << endl;
  }
  {
    using namespace fff;
    cout << x << endl;
  }
  return 0;
}

