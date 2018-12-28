#include <iostream>
#include <string>
using namespace std;

bool testPalindrome( string, int, int );

int main()
{
   string input;

   cout << "Enter a sentence:\n";
   getline( cin, input );

   if ( testPalindrome( input, 0, input.length() - 1 ) )
      cout << '\"' << input << "\" is a palindrome" << endl;
   else
      cout << '\"' << input << "\" is not a palindrome" << endl;
}

bool testPalindrome( string palindrome, int left, int right )
{
   if ( left == right || left > right )
      return true;
   else if ( palindrome[ left ] != palindrome[ right ] )
      return false;
   else
      return testPalindrome( palindrome, left + 1, right - 1 );
}
