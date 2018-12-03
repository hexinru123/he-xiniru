#include <iostream>

using namespace std;

int main()
{
    int number = 0;
    int a = 0;
    int smallest = 9999;

    cout << "Enter the numbers:" << endl;
    cin >> number;

    for( int i=0; i<number; i++ )
    {
        cin>>a;
        if( a < smallest)
            smallest = a;
    }
    cout << "The smallest is:" <<smallest<<endl;
}
