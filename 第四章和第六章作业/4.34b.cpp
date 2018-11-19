
#include <iostream>
using namespace std; 

int main()
{
   int number = 1; 
   int a; 
   int b = 1; 
   double e = 1.0; 
   cout << "输入: ";
   cin >> a;
   while ( number < a )
   {
      b *= number;
      e = e + 1.0 / b;
      number++;
   } 
   cout << "e: " << e << endl;
} 
