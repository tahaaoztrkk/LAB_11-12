#include <map>
#include <iostream>
using namespace std;
int main()
{
    map<int, string> student = { {2,"taha"},{3,"berkay"} };

    student.insert({ 5,"Timothy" });
    student.insert({ 5,"Aaron" });

    cout << student.at(5)<<endl;

    student.at(5) = "taha";

    cout << "updated value: " << student[5];
}