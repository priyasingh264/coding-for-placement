/*************************************************************************

*******************************************************************************/

// C++ program for power of a number
#include <iostream>
#include<math.h>
using namespace std;
double powerOfNumber(double base,double exponent)

{
   double res=pow(base,exponent);
   return res;
}

int main()
{
    double base=5,exponent=3;
    cout<<base<<"\n"<<exponent<<"\n";
   cout<< powerOfNumber(base,exponent);
    return 0;
}


