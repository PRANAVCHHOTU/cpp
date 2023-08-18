#include <iostream> 
using namespace std;
int main () {
    int a;
    string num[10]={"Greater than 9", "one","two","three","four","five","six","seven","eight","nine"};
    cin >>a ;  
    if (a>=1 && a<=9) {
        cout << num[a] ;
    }
    else {
        cout<< num[0] ;
    }


    // sum +=z;
 //cout<< " sum of number is ",z << ;

return 0;

}

