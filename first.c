#include <stdio.h>
//using namespace std;
int main ()
{
int n;    
int len =2*n-1;
int array[len][len]; 
//row aur column ko (0,0) liye to start point 0 huaa , 
// isiliye lenghth of row and column len-1 hoga 
int i,j,start=0;
int last =len-1;

printf ("input is .");
scanf ("%d",&n);
  //n ka value 0 nhi hoga acc to que , input value 1 last h
while (n !=0)
{ 
    // loop start kiye 0 se last row & col tkk 
for(i=start;i<=last;i++)
{

    for ( j=start ;j<=last;j++) 
 // if loop 0 se start huaa to last tkk chlega ss
    {
        if (i==start || i==last ||
            j==start || j==last )
          array[i][j]= n;
    }

    } 
  // start 0 se leke last tkk ,so incremented and value of n and will decrement, similarly for 12th row to 1st row
    ++start;
    --last;
    n--;
}
    return 0;
}