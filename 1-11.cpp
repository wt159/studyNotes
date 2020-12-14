#include <iostream>
using namespace std;

int main(void)
{
    cout << " Please input two nums:" << endl;
    int max,min;
    cin >> min >> max;
    int temp = max - min;
    if(temp < 0)
    {
        temp = -temp;
        min = max;
    }
    while(temp >= 0)
    {
        cout << min+temp << endl;
        --temp;
    }

    return 0;
}