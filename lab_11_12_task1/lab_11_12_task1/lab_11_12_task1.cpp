#include <map>
#include <iostream>
using namespace std;
int main()
{
	map<int, string> student;

	map<int, string> stu = { {1,"taha"},{2,"berkay"},{3,"polat"} };

	for (auto s : stu) {
		cout << s.first << " " << s.second << endl;
		
	}
	return 0;
}

