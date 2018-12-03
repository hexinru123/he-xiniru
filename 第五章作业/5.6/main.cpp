#include <iostream>
using namespace std;

int main()
{
   int a;
   int b = 0;
   int sum = 0;

   cout << "Enter numbers (9999 to end):" << endl;
   cin >> a;

   while ( a != 9999 )
   {
      sum += a;
      b++;

      cin >> a;
   }

   if ( b != 0 )
      cout << " The average is: "
         << static_cast< double > ( sum ) / b << endl;
   else
      cout << "No values were entered." << endl;
}
