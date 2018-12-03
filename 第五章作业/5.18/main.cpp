#include <iostream>

using namespace std;

int main()
{
    int number;
    int a;

   cout << "The factor is: ";

   for ( int i = 1; i <= 256; i++ )
   {
      cout << dec << i << "\t\t";

      number = i;
      a = 256;

      cout << ( number == 256 ? '1' : '0' );

      do
      {
         cout <<
            ( number < a && number >= ( a / 2 ) ? '1' : '0' );
         a /= 2;
         number %= a;
      } while ( a > 1 );

      cout << '\t' << oct << i;

      cout << '\t' << hex << i << endl;
   }
}

