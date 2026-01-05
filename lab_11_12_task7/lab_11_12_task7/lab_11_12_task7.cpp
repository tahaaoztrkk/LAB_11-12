#include <map>
#include <iostream>
using namespace std;
int main()
{
    map<int, string> myMap = { {1,"One"},{2,"two"} ,{3,"three"} ,{4,"four"} ,{5,"five"} };

    for (auto it = myMap.begin(); it != myMap.end(); ++it)
        cout << it->first << " " << it->second
        << endl;

    return 0;
}