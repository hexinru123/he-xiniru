
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

double roundToInteger( double ); 
double roundToTenths( double ); 
double roundToHundredths( double ); 
double roundToThousandths( double ); 

int main()
{   
   int count; 
   double number; 

   cout << "输入数字个数： " << fixed;
   cin >> count;
   for ( int i = 0; i < count; i++ ) 
   {
      cout << "\n输入: ";
      cin >> number;
      cout << setprecision( 6 ) << number 
         << " rounded to the nearest integer is:    "
         << setprecision( 0 ) << roundToInteger( number ) << '\n';
      cout << setprecision( 6 ) << number 
         << " rounded to the nearest tenth is:      "
         << setprecision( 1 ) << roundToTenths( number ) << '\n';
      cout << setprecision( 6 ) << number 
         << " rounded to the nearest hundredth is:  "
         << setprecision( 2 ) << roundToHundredths( number ) << '\n';
      cout << setprecision( 6 ) << number 
         << " rounded to the nearest thousandth is: "
         << setprecision( 3 ) << roundToThousandths( number ) << '\n';
   }
} 

double roundToInteger( double n )
{
   return floor( n + .5 );
} 

double roundToTenths( double n )
{
   return floor( n * 10 + .5 ) / 10;
} 
double roundToHundredths( double n )
{
   return floor( n * 100 + .5 ) / 100;
} 

double roundToThousandths( double n )
{
   return floor( n * 1000 + .5 ) / 1000;
} 

