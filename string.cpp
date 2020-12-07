#include <iostream>
#include <string>
using namespace std;

int main(void)
{
	string name = "weitaiping";
	string age("27");
	string name2 = name + " age is " + age;
	string msg = "wtp" + age + " is 27";

	cout << msg << endl;
	cout << name2 << endl;
	return 0;
}