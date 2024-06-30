#include <iostream>
using namespace std;

int factorial(int n){
    int fact=1;
    for(int i=1;i<=n;++i){
        fact*=i;
    }
    return fact;
}

int main()
{
    int n;
    cout<<"Hello World"<<endl;
    cout<<"enter the number positive olaola"<<endl;
    cin>>n;
    
      if (n < 0) {
        cout << "Please enter a non-negative integer." ;
    } else {
        int result = factorial(n);
        cout << "The factorial of is "<< result << endl;
    }

    return 0;
}