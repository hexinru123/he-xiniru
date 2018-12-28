#include <iostream>
#include <cstdlib>
#include <ctime>
#include <iomanip>
using namespace std;

const int RE= 70;


void moveTortoise( int *const );
void moveHare( int *const );
void printCurrentPositions( const int *const, const int *const );

int main()
{
   int tortoise = 1;
   int hare = 1;
   int timer = 0;

   srand( time( 0 ) );

   cout << "BANG               !!!!"
      << "\nAND THEY'RE OFF    !!!!\n";


   while ( tortoise != RE&& hare != RE)
   {
      moveTortoise( &tortoise );
      moveHare( &hare );
      printCurrentPositions( &tortoise, &hare );
      timer++;
   }

   if ( tortoise >= hare )
      cout << "\nTORTOISE WINS!!! YAY!!!\n";
   else
      cout << "Hare wins. Yuch.\n";

   cout << "TIME ELAPSED = " << timer << " seconds" << endl;
}

void moveTortoise( int * const tP )
{
   int x = 1 + rand() % 10; // random number 1-10

   if ( x >= 1 && x <= 5 ) // fast plod
      *tP += 3;
   else if ( x == 6 || x == 7 ) // slip
      *tP -= 6;
   else // slow plod
      ++( *tP );

   if ( *tP < 1 )
      *tP = 1;
   else if ( *tP > RE)
      *tP = RACE_END;
}


void moveHare( int * const rabbitPtr )
{
   int y = 1 + rand() % 10; // random number 1-10

   if ( y == 3 || y == 4 ) // big hop
      *rabbitPtr += 9;
   else if ( y == 5 )  // big slip
      *rabbitPtr -= 12;
   else if ( y >= 6 && y <= 8 ) // small hop
      ++( *rabbitPtr );
   else if ( y > 8 ) // small slip
      *rabbitPtr -= 2;

   if ( *rabbitPtr < 1 )
      *rabbitPtr = 1;
   else if ( *rabbitPtr > RE)
      *rabbitPtr = RACE_END;
}


void printCurrentPositions( const int * const snapperPtr,
   const int * const bP )
{
   if ( *bP == *snapperPtr )
      cout << setw( *bP ) << "OUCH!!!";
   else if ( *bP < *snapperPtr )
      cout << setw( *bP ) << 'H'
         << setw( *snapperPtr - *bP ) << 'T';
   else
      cout << setw( *snapperPtr ) << 'T'
         << setw( *bP - *snapperPtr ) << 'H';

   cout << '\n';
}
