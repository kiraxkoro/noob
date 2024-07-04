#include <iostream>
using namespace std;

int sumOfSquares(int n) {
    int sum = 0;
    for (int i = 1; i <= n; ++i) {
        sum += i * i;
    }
    return sum;
}

int main() {
    int n;
    cout << "Enter a positive integer: ";
    cin >> n;

    if (n < 1) {
        cout << "Please enter a positive integer that should be greater than 1" <<endl;
    } else {
        int result = sumOfSquares(n);
        cout << "The sum of the squares of the first  natural numbers is " << result <<endl;
    }

    return 0;
}
