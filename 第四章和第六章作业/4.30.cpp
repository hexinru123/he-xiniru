
#include <iostream>
using namespace std; 

int main()
{
   double r; 
   double pi = 3.14159; 
   cout << "输入半径: ";
   cin >> r;
   cout << "直径： " << r * 2.0;
   cout << "\n周长： " << 2.0 * pi * r;
   cout << "\n面积： " << pi * r * r << endl;
} 
