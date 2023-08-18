#include <stdio.h>
int main () {
int n,count=1;
int i,j;
printf ("number of input for pattern.");
scanf ("%d",&n);
for (i=1; i<n ; i++)
{
    printf("\n");
for(j=1; j<=i; j++) 
{
printf("%d",count);
count++;
 }
}
return 0;
} 