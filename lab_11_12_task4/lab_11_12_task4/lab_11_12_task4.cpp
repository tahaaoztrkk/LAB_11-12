#include <map>
#include <iostream>
using namespace std;

int main()
{
    map<string, int> people = { {"taha",12},{"ali",5} };

    people["tolga"] = 56;
    people["mehmet"] = 38;

    people.insert({ "Josef",58 });
    people.insert({"adam",13});

    for (auto p : people)
        cout << p.first << " " << p.second<<endl;

    

    return 0;
}