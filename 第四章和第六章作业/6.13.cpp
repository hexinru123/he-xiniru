
#include <iostream> 
#include <iomanip> 
#include <cmath>
using namespace std;

double roundToIntegers( double ); 

int main()
{
   double x; 
   double y; 
   cout << f; 
   for ( int i= 1; i<= 5; i++ ) 
   {
      cout << "Enter a number: ";
      cin >> x;
      y = roundToIntegers( x ); 
      cout << setprecision( 6 ) << x << " rounded is "
         << setprecision( 1 ) << y << endl;
   } 
} 

double roundToIntegers( double value )
{
	return floor( value + .5 ); 
}

