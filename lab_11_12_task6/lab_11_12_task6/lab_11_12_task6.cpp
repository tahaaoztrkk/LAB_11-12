#include <map>
#include <iostream>
using namespace std;
int main()
{
    map<string,int> people = { {"taha",1},{"berkay",2},{"polat",3} };

    cout<<people.count("taha")<<endl;

    auto it = people.find("berkay");

    if (it != people.end())
        cout << it->first << " " << it->second;
    else cout << "Key not Found!";
    return 0;
    

}