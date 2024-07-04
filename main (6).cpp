#include <iostream>
#include <string>

using namespace std;

int main() {
    string input;
    
    
    cout << "Enter a string: ";
    getline(cin, input);
    
    
    int length = input.length();
    for (int i = 0; i < length / 2; ++i) {
        char temp = input[i];
        input[i] = input[length - 1 - i];
        input[length - 1 - i] = temp;
    }
    
   
    cout << "Reversed string: " << input << endl;
    
    return 0;
}
