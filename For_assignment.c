#include <iostream>

using namespace std;

#define LARGEST_DIVISOR 20

int main()
{
   long int smallest_num = LARGEST_DIVISOR + 1;
   long int i;   
   
   char smallest_num_found = 0;
   
   do
   {
      for ( i = 1; i <= LARGEST_DIVISOR; i++ )
      {
         if ( (smallest_num % i) != 0  )
         {
            break;
         }
      }

      if ( i == LARGEST_DIVISOR + 1 )
      {
         smallest_num_found = 1;
      }
      else
      {
         smallest_num++;
      }
   }
   while( !smallest_num_found );
   
   cout << "\n\nSolution: " << smallest_num << "\n\n";   

   return 0;   
}

