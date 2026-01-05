#include <map>
#include <iostream>
using namespace std;
int main()
{
    map<int, string> people = { {1,"a"},{2,"b"} ,{3,"c"} };

    people.erase(1);

    for (auto p : people)
        cout << p.first << " " << p.second << endl;

    people.clear();
    cout << people.size()<<endl<<people.empty();

    
}