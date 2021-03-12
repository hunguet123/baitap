#include <iostream>

using namespace std;

int main( )
{
   double a[4] = {1,2,3};
   for (double *cp = a; (*cp) != '\0'; cp+=2) {
      cout << (void*) cp << " : " << (*cp) << endl;
   }
   return 0;
}

