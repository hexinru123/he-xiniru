
#include <iostream> 
#include <iomanip> 
using namespace std;

bool ispri( int ); 

int main()
{
   int count = 1;  
   cout << "The prime numbers from 1 to 10000 are:" << endl;
   cout << setw( 6 ) << 2; 
   for ( int i = 3; i < 10000; i += 2 )
   {
      if ( ispri( i ) ) 
      {
         count++;
         cout << setw( 6 ) << i;
      
         if ( count % 10 == 0 ) 
            cout << '\n';
      } 
   } 
   cout << endl << "Total of " << count 
      << " prime numbers between 1 and 10000." << endl;
} 

bool ispri( int n )
{
   for ( int i = 2; i <= n / 2; i++ )
   {
      if ( n % i == 0 )
         return false;
   }
   return true;
}
