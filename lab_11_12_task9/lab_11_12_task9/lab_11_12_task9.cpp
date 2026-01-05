#include <iostream>
#include <map>
#include <string>
using namespace std;

int main() {
    map<string, string> people;

    people["Alice"] = "Software Engineer";
    people["Bob"] = "Data Scientist";
    people["Charlie"] = "System Administrator";

    string name;
    cout << "Enter a name to search: ";
    cin >> name;

    try {
        cout << name << "'s profession: " << people.at(name) << endl;
    }
    catch (const exception& e) {
        cout << "Error occurred: " << e.what() << endl;
    }

    return 0;
}