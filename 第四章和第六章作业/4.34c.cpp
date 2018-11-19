
#include <iostream>
using namespace std; 

int main()
{
   int n = 1; 
   int a, x;
   int b = 1; 
   double e = 1.0; 
   double ex = 1.0; 
   cout << "输入x: ";
   cin >> x;
   cout << "输入a: ";
   cin >> a;
   while ( n < a )
   {
      exponent *= x; 
      b *= n; 
      e += ex / b; 
      n++;
   } 
   cout << "e 对于x为 " << x << " 结果为 " << e << endl;
} 

