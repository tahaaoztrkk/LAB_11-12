#include <iostream>
#include <stdexcept>
#include <string>
using namespace std;

class MyException {
public:
    const char* what() const {
        return "Custom exception: Something went wrong!";
    }
};

int main() {
    int choice;

    cout << "Menu:\n";
    cout << "1. Throw MyException\n";
    cout << "2. Throw std::invalid_argument\n";
    cout << "3. Throw C-string\n";
    cout << "Enter your choice: ";
    cin >> choice;

    try {
        if (choice == 1) {
            throw MyException();
        }
        else if (choice == 2) {
            throw invalid_argument("Invalid argument: Bad input detected!");
        }
        else {
            throw "Unknown error";  
        }
    }
    catch (const invalid_argument& e) {
        cout << "Caught invalid_argument: " << e.what() << endl;
    }
    catch (const MyException& e) {
        cout << "Caught MyException: " << e.what() << endl;
    }
    catch (const char* e) {
        cout << "Caught C-string: " << e << endl;
    }
    catch (...) {
        cout << "Caught unknown exception type!" << endl;
    }

    return 0;
}