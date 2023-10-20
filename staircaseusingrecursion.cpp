#include <iostream>
using namespace std;

int countways(int n)
{
    if(n==0||n==1) {
        return 1;
    }
    if(n==2) {
        return 2;
    }
    return countways(n-3)+countways(n-2)+countways(n-1);
}
int main() {
    int n;
    cin>>n;
    cout<< countways(n)<<endl;
    return 0;
}