
#include <iostream>
#include <iomanip>
using namespace std;

int change( int ); 

int main()
{
   int n; 

   cout << "输入: ";
   cin >> n;
   cout << "转换后: ";
   cout << change( n ) << endl;
} 
int change( int n )
{
   int r = 0; 

   while ( n > 0 )
   {
      r *= 10; 
      r += n % 10; 
      n /= 10; 
   } 

   return r;
} 
