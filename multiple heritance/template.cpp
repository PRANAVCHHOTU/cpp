#include <iostream>
using namespace std;

template <class P>
class cricket {

    private:
    P ball;

    public:
    cricket (P  b): ball(b)  {}
    P getball() {
        return ball;
    }
};

int main()
{
 cricket <int> cricball(5);
 cricket <double> floatvalue(8.0);
 cout <<"no of ball="<< cricball.getball()<< endl;
 cout <<"ball in float value="<< floatvalue.getball()<< endl;
 return 0;
}