#include <iostream>
using namespace std;
int main () {
    int a[100][100];
    int i,j,m,n;
    cout<<"row and colum "<< endl;
    cin >>m>>n;
    cout <<"array is "<<endl;
    for(i=0;i<m;i++) {
        for(j=0;j<n;j++) {
         cin>>a[i][j]; 
        }
    }
     
     cout<< "value of array given in row wise."<<endl;
     
        for(i=0;i<m;i++){
            for(j=0;j<n;j++){
            //cout<<"the aray of matrix form."<<endl;
            cout<<a[i][j] <<" ";
        }
        cout<<endl;
     }
     cout<< "value of array given in column wise."<<endl;
     
        for(i=0;i<n;i++){
            for(j=0;j<m;j++){
            //cout<<"the aray of matrix form."<<endl;
            cout<<a[j][i] <<" ";
        }
        cout<<endl;
     }
return 0;
}