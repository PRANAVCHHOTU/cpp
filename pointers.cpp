#include <iostream>
using namespace std;
int main()
{
    int *ptr ;
    int var =5;
    int arr[5];
    
    ptr = &var ;
    cout << "value of var is . "  <<  var << endl;
    cout <<"address of var is ."<<&var << endl;
    cout <<"address of ptr is."<<&ptr <<endl;
    cout <<"value of ptr is ."  << *ptr <<endl;
    
    cout<<"displaying address of arrays."<<endl;
    for (int i=0; i<5; i++) {
   cout<<"array[" << i<< "] =" << &arr[i] << endl;
    }
    ptr=arr;
    cout << " displaying address using pointer." <<endl;
    for (int i=0; i<5; i++)

    cout << "pointer + "<< i<<" = " << ptr <<  endl;

    return 0;

}