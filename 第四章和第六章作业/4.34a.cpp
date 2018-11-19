
#include <iostream>
using namespace std; 

int main()
{
   int n; 
   int result = 1; 
   cout << "输入一个非负整数: ";
   cin >> n;    
   while ( n > 0 ) 
   {
      result = result * n ;
      n = n - 1;
   }
   cout << "结果: "<< result << endl;
} 



