#include <iostream>
using namespace std;

int main(void)
{
    int val = 50;
    int sum = 0;
    while(val <= 100)
    {
        sum += val;
        cout << val << " " << sum << endl;
        ++val;
    }
    
    return 0;
}