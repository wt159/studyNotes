#include <iostream>
using namespace std;

/*
*移动构造：
*   移动构造可以减少不必要的复制，带来性能上的提升。
*   让这个临时对象它原本控制的内存的空间转移给构造出来的对象
*/  
class IntNum{
    public:
        IntNum(int x = 0):xptr(new int(x)){     //构造函数
            cout << "Calling constructor..." << endl;
        }
        IntNum(const IntNum &n):xptr(new int(*n.xptr)){//复制构造函数
            cout << "Calling copy constructor..." << endl;
        }
        IntNum(IntNum &&n):xptr(n.xptr){        //移动构造函数
            n.xptr = nullptr;
            cout << "Calling move constructor..." << endl;
        }
        int getInt(){
            return *xptr;
        }
        ~IntNum(){
            delete xptr;
            cout << "Destructing..." << endl;
        }
    private:
        int *xptr;
};

IntNum getNum(){
    IntNum a;
    return a;
}

int main(void)
{
    IntNum a = getNum();
    cout << a.getInt() << endl;
    return 0;
}