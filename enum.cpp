#include <iostream>
using namespace std;

enum Type1
{
	General = 1,
	Light,
	Medium,
	Heavy
};
enum Type2 
{
	a,b,c,d,e,f
};

int main()
{
	Type1 s = Medium;
	cout << s << endl;

	Type2 s2 = c;
	cout << s2 << endl;
	return 0;
} 