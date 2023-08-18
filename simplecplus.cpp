#include  <iostream>
using namespace std;
int main () 
{
 int i,a,b;
 char  d [] [10] ={ "one", "two","three","four","five","six","seven","eight","nine" };
  cin >> a >> b;
  for ( i=a; i<=b; i++ )
  {
   if (i>=1 && i<=9)
    {
      cout << d[i-1] <<endl;
    }
    else if (i>9 && i%2==0) 
    {
      cout<< "even \n" ;
    }
    else   {
      cout << "odd\n";
    }
  }
   }