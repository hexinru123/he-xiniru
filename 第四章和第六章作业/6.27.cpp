
#include <iostream>
using namespace std; 

int main()
{
   double a, b, c ; 
   cout << "输入a: ";
   cin >> a;
   cout << "输入b: ";
   cin >> b;
   cout << "输入c: ";
   cin >> c;
   cout << "The smallest value is " << smallest( x, y, z ) << endl;
} 
double findsmall( double a, double b, double c )
{
   if ( a < b && a < c )
      return a;
   else if ( b < a && b < c )
      return b;
   else
      return c;
}