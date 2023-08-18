#include<iostream>
using namespace std;
class vehicle {
    public:
    vehicle() {
        cout <<"vehicle name." << endl;

    }
};
class car : public vehicle
{
    public :
    car () {
        cout << "characteristic of vehicle ." << endl ;
    }
};
int main ()
{
    car model;
    return 0;
}