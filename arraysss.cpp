#include <iostream>
using namespace std;
int main() 
 {
     cout <<" Enter the number of values to sum "6;
     int n ;
     cin >> n;
     int a[n];
     for (int i=0; i<n; i++) {
         cin >> a[i];
     } 
     for (int i=0; i<n; i++) {
         cout << a[i] <<" " ; 
         } cout << endl;
     int sum =0;
     for (int i=0 ;i<n; i++) {
         sum=sum+a[i];
     }
     cout<< sum <<endl;

 }