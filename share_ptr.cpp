#include <iostream>
#include <algorithm>
#include <string>
#include <list>
#include <vector>
#include <map>
#include <memory>
using namespace std;

class Demo{
public:
    Demo(int a):value(a){};
    virtual ~Demo(){};
    void pri();
private:
    int value;
};
void Demo::pri()
{
    cout << this <<"----" << this->value << endl;
}

int main()
{
    //shared_ptr<Demo> p(new Demo); 
    shared_ptr<Demo> p = make_shared<Demo> (Demo(2));
    shared_ptr<Demo> q(p);
    shared_ptr<Demo> r = p;
    
    p->pri();
    q->pri();
    r->pri();
    return 0;
}