
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

double calculateCharges( double ); 

int main()
{
   double hour; 
   double currentCharge; 
   double totalC = 0.0; 
   double totalho = 0.0; 
   bool fir = true; 
   cout << fixed; 
   cout << "Enter the ho parked for 3 cars: ";
   for ( int i = 1; i <= 3; i++ )
   {
      cin >> hour;
      totalho += hour; 
      if ( fir )
      {
         cout << setw( 5 ) << "Car" << setw( 15 ) << "ho"
            << setw( 15 ) << "Charge\n";
         fir = false; 
      } 
      currentCharge = calculateCharges( hour );
      totalC += currentCharge; 
      cout << setw( 3 ) << i << setw( 17 ) << setprecision( 1 ) << hour
         << setw( 14 ) << setprecision( 2 ) << currentCharge << "\n";
   } 
   cout << setw( 7 ) << "TOTAL" << setw( 13 ) << setprecision( 1 )
      << totalho << setw( 14 ) << setprecision( 2 )
      << totalC << endl;
} 

double calculateCharges( double ho )
{
   double charge; 
   if ( ho < 3.0 ) 
      charge = 2.0;
   else 
      charge = 2.0 + .5 * ceil( ho - 3.0 );
   return ( charge > 10.0 ? 10.0 : charge );
} 

