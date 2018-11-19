#include <iostream>
using namespace std;

bool isPerfect( int ); 
void print( int ); 

int main()
{
   cout << "输入:" << endl;
   for ( int i = 2; i <= 1000; i++ )
   {
      if ( isPerfect( i ) ) 
         print( i ); 
   } 
   cout << endl;
} 

bool isPerfect( int value )
{
   int f = 1; 
   for ( int i = 2; i <= value / 2; i++ )
   {
      if ( value % i == 0 )
         f += i; 
   } 
   if(f==value){
	   return true;
   }
   return false;
} 

void print( int value )
{
   cout << value << " = 1";
   for ( int i = 2; i <= value / 2; i++ )
   {
      if ( value % i == 0 )
         cout << " + " << i; 
   } 
   cout << endl;
} 