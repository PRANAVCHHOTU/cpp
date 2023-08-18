#include <iostream>
using namespace std;
class room {
private:
int lenght;
int breadth;
// parametric constructor
public:
room(int len , int brd) {
lenght = len;
breadth = brd; 
}
int area() {
    cout<< "area of room=";
    return lenght*breadth ;
}
};
int main()
{
room wall (8,7);
cout << wall.area()<< endl;
return 0;
}