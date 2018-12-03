#include <iostream>

using namespace std;

int main()
{
    int a = 0;
    int number = 0;
    int sum = 0;

    cout<<"Enter the number of a to be summed "
      << "followed by the a:";
    cin >> number;

   for ( int i = 1; i <= number; i++ )
   {
      cin >> a;
      sum += a;
   }

   cout << "Sum of the " << number << " a is " << sum << endl;
}
