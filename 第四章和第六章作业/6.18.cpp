
#include <iostream>
using namespace std;

int integerPower( int, int ); 

int main()
{
   int e; 
   int b; 

   cout << "Enter base and eonent: ";
   cin >> b >> e;
   cout << b << " to the power " << e << " is: "
      << integerPower( b, e ) << endl;
} 

int integerPower( int b, int e )
{
   int p = 1; 
   for ( int i = 1; i <= e; i++ )
      p= p* b;
   
   return p;
} 

