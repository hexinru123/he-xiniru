
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

double hypotenuse( double, double ); 

int main()
{
   double s1; 
   double s2; 
   
   cout << fixed; 
   for ( int i = 1; i <= 3; i++ ) 
   {
      cout << "\nEnter 2 ss of right triangle: ";
      cin >> s1 >> s2;
      cout << "Hypotenuse:  " << setprecision( 1 )
         << hypotenuse( s1, s2 ) << endl;
   } 
} 

double hypotenuse( double s1, double s2 )
{
   return sqrt( s1 * s1 + s2 * s2 );
}

