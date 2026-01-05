#include <map>
#include <iostream>
using namespace std;
int main()
{
    map<string,int> people;

    map<string,int> p = { {"taha",23},{"berkay",21},{"polat",23} };

    cout << p["taha"]<<endl;
    cout << p.at("taha")<<endl;
    cout << p.at("ahmet"); //Gave an debug error
    
}