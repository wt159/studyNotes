#include <iostream>
using namespace std;

class demo{
public:
    demo(int x = 0):xptr(new int(x)){
        cout << "Calling general constructor..." << x << endl;
    }
    demo(demo &n):xptr(new int(*n.xptr)){
        cout << "Calling copy constructor..." << *n.xptr << endl;
    }
    demo(demo &&n):xptr(n.xptr){
        n.xptr = nullptr;
        cout << "Calling move constructor..." << *xptr << endl;
    }
    
    ~demo(){
        delete xptr;
        cout << "destructor..." << endl;
    }
    int getNum(){
        return *xptr;
    }
private:
    int *xptr;
};

demo getDemo(){
    demo m(1);
    return m;
};

int main(void)
{
    demo c(2);
    cout << c.getNum() << endl;
    demo b = c;
    cout << b.getNum() << endl;
    

    demo a(getDemo());
    cout << a.getNum() << endl;
    demo c1(std::move(a));      //移动构造函数
    cout << c1.getNum() << endl;

    

    return 0;
}