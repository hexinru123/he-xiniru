
#include <iostream> 
#include <iomanip> 
#include <cmath>
using namespace std;

bool isPrime( int ); 

int main()
{
   int count = 1; 

   cout << "The prime numbers from 1 to 10000 are:" << endl;
   cout << setw( 6 ) << 2; 


   for ( int l = 3; l < 10000; l += 2 )
   {

      if ( isPrime( l ) ) 
      {
         count++;
         cout << setw( 6 ) << l;
      
 
         if ( count % 10 == 0 )
            cout << '\n';
      } 
   } 

   cout << endl << "共有" << count 
      << " 个素数." << endl;
} 

bool isPrime( int n )
{

   for ( int i = 2; 
      i <= static_cast< int > ( sqrt( static_cast< double > ( n ) ) );
      i++ )
   {

      if ( n % i == 0 )
         return false;
   } 

   return true;
} 

