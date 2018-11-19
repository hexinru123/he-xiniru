
#include <iostream>
using namespace std; 

int main()
{
   double s1; 
   double s2; 
   double s3; 
   bool flag = false; 

   cout << "边a长度: ";
   cin >> s1;

   cout << "边b长度: ";
   cin >> s2;

   cout << "边c长度: ";
   cin >> s3;

   if ( s1 + s2 > s3 && s2 + s3 > s1 && s3 + s1 > s2 )
   {
            flag = true;

   } 

   if ( flag )
      cout << "可以组成三角形" << endl;
   else 
      cout << "不能组成三角形" << endl;
} 

