#include <iostream> 
using namespace std;

template <class darling>
     darling add(darling a , darling b) {
         return (a+b);

     }
     int main() {

        int sum;
        int sum2;
         
          sum = add <int> (3,8);
          cout <<"result of sum=" << sum << endl;


          sum2= add<int>(8,9);
          cout <<"result of sum2=" << sum2 <<endl;   


     }
