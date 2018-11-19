
#include <iostream>
using namespace std;

void square( int ); 

int main()
{
   int s;

   cout << "Enter s: ";
   cin >> s;
   cout << '\n';
   square( s ); 
   cout << endl;
} 
void square( int s )
{
   for ( int row = 1; row <= s; row++ ) 
   {
      for ( int col = 1; col <= s; col++ )
         cout << '*';
      cout << '\n';
   } 
} 

