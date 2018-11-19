
#include <iostream>
using namespace std; 

int main()
{
   int num; 
   int n = 1; 
   int result = 0; 
   cout << "输入一个二进制数: ";
   cin >> binary;
   while ( num != 0 )
   {
      result = result + (binary % 10 * n);
      num = num/10 ;
      n = n*2;
   } 

   cout << "Decimal is: " << result << endl;
} 

