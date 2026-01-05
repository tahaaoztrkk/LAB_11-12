#include <iostream>
using namespace std;

int main() {
    int a, b;

    cout << "Enter two integers (a and b): ";
    cin >> a >> b;

    try {
        if (b == 0) {
            throw 0;  
        }
        cout << "Result: " << a / b << endl;
    }
    catch (int e) {
        cout << "Error: Division by zero is not allowed!" << endl;
    }

    cout << "End of program" << endl;
    return 0;
}