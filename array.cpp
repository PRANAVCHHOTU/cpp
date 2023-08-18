#include <iostream>
using namespace std;
int main () 
{
    int n;
    cout<< "enter the number: ";
  cin >> n;  
  int a[n];
  for (int i=0;i<n ;i++) {
      cout << "enter "<< i << "th index of array: ";
  cin >> a[i]; 
  }   
  int largest = a[0] ;
  for (int i=0 ; i<n; i++) {
      if (a[i] > largest) {
      largest =a[i]; 
      }
  } 
  cout <<"Largest  value "<< largest  ; 
   return 0;

}