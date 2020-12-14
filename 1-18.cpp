#include <iostream>
using namespace std;

int main(void)
{
    int curVal = 0;
    int val = 0;
    int cnt = 1;
    if(cin >> val)
    {
        curVal = val;
        while(cin >> val)
        {
            if(curVal == val)
            {
                ++cnt;
                
            }
            else
            {
                cout << curVal << " occurs " << cnt 
                << " times" << endl;
                cnt = 1;
                curVal = val;
            }
        }
        cout << curVal << " occurs " << cnt 
                << " times" << endl;
    }
    return 0;
}