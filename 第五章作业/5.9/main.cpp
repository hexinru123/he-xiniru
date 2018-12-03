#include <iostream>

using namespace std;

int main()
{
    int number = 1;
    for ( int i = 3; i <= 15; i += 2)
        number*= i;

    cout << "Found the odd numbers from 1 to 15 is:"<<
        number<<endl;
}
