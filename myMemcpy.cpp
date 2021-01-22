#include <iostream>
#include <algorithm>
#include <string>
#include <list>
#include <vector>
#include <map>
using namespace std;

bool myMemcpy(void *distSrc, const void *sourSrc, size_t len)
{
    cout << (int *)distSrc << " | " << (int *)sourSrc << endl;
    cout << (int *)distSrc+len << " | " << (int *)sourSrc+len << endl;
	cout << (char *)distSrc-(char *)sourSrc <<  " | " << len << endl;
    size_t addr_diff = (char *)distSrc-(char *)sourSrc;
    if(addr_diff < 0)addr_diff = -addr_diff;
    if(addr_diff < len){
        cout << "copy faild!" << endl;
        return false;
    }
}



int main()
{
	int a[1];
    int c,d;
    int e[2];
    char b[9];
    myMemcpy((void*)a, (const void*)b, 10);
	return 0;
}