#include <iostream>
using namespace std;
#include <map>
typedef std::map<std::string, int> maptype;
void mapTest(void)
{
	maptype map1;
	map1.insert(pair<string, int>("xyhello", 10));
	map1.insert(pair<string, int>("qdasd", 12));
	map1.insert(pair<string, int>("vfdss", 34));
}
void mapPri(std::map<string, int> &m)
{
	
}

int main(void)
{
	cout << "hello xiaoyu" << endl;
	return 0;
}