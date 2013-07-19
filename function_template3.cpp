// function template II
#include <iostream>
using namespace std;

template <class T>
T GetMax (T a, T b) {
  T result;

  result = a>b?a:b;

  return result;
}

template <class T, class U>
T GetMin (T a, U b) {
  T result;

  result = a<b?a:b;

  return result;
}

int main () {
  int i=5, j=6, k;
  long l=10, m=5, n;

  k=GetMin<int,long>(j,l);
  n=GetMin<long,int>(m,i);
  cout << k << endl;
  cout << n << endl;

  return 0;
}

