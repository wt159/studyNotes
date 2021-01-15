#include <iostream>
#include <algorithm>
#include <string>
#include <list>
#include <vector>
#include <map>
using namespace std;


int main()
{
	int n_int_max = INT_MAX;
	int nIntMin = INT_MIN;
	short nShortMax = SHRT_MAX;
	short nShortMin = SHRT_MIN;
	long nlongMax = LONG_MAX;
	long nlongMin = LONG_MIN;
	long long nlonglongMax = LONG_LONG_MAX;
	long long nlonglongMin = LONG_LONG_MIN;

	cout <<  "short size:" << sizeof(short) << " " 
	"short limits: " << nShortMin << "-" << nShortMax <<endl;
	cout << "int size:" << sizeof(int) << " " 
	"int limits: " << nIntMin << "-" << n_int_max << endl;
	cout << "long size:" << sizeof(long) << " " 
	"long limits: " << nlongMin << "-" << nlongMax << endl;
	cout << "ll size:" << sizeof(long long) << " " 
	"long long limits: " << nlonglongMin << "-" << nlonglongMax <<endl;


	return 0;
}