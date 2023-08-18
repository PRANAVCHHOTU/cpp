#include <iostream>
 
/* using namespace std;
int main(){
  int n,orig,r,rev=0;
  cout<<"enter a number.";
  cin>>n;
  orig=n;
  //TO CHECK Q NUMBER IS PALLINDROME NOT.
  while(n>0) 
{
  //r=n%10;
  //rev=r+rev*10;
  //n=n/10; 
  rev=rev*10+n%10;
  n=n/10;
  } 
  if(orig==rev)
   cout<<"pallindrome";
   else
   cout<<"not pallindrome";
}/*
#include <iostream>

int main() {
    int n;
    std::cout << "Enter the number of rows: ";
    std::cin >> n;

    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= n - i; ++j) {
            std::cout << " ";
        }
        for (int j = 1; j <= 2 * i - 1; ++j) {
            if (j == 1 || j == 2 * i - 1) {
                std::cout << "*";
            } else {
                std::cout << " ";
            }
        }
        std::cout << "\n";
    }

    for (int i = n - 1; i >= 1; --i) {
        for (int j = 1; j <= n - i; ++j) {
            std::cout << " ";
        }
        for (int j = 1; j <= 2 * i - 1; ++j) {
            if (j == 1 || j == 2 * i - 1) {
                std::cout << "*";
            } else {
                std::cout << " ";
            }
        }
        std::cout << "\n";
    }

    return 0;
}
