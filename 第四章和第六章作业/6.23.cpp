
#include <iostream>
using namespace std;

void square( int, char ); 
int main()
{
   int s; 
   char character; 
   cout << "Enter a character and the s length: ";
   cin >> character >> s;
   cout << '\n';
   square( s, character ); 
   cout << endl;
} 
void square( int s, char fillCharacter )
{
   for ( int r = 1; r <= s; r++ ) 
   {
      for ( int c = 1; c <= s; c++ )
         cout << fillCharacter;
      cout << '\n';
   } 
} 

