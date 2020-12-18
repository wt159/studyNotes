#include <iostream>
using namespace std;
/*
知识点：
	1、右值：
		左值是指表达式结束后依然存在的持久化对象，	//int a;a就是左值
		右值是指表达式结束时就不再存在的临时对象。	//1+2临时变量、2、‘s’、"hello"
		所有的具名变量或者对象都是左值，而右值不具名。
	2、右值引用
		demo &&n
    2、std::move()
        将左值引用转换为右值引用
        避免不必要的拷贝操作
        将对象的状态或者所有权从一个对象转移到另一个对象，只是转移，没有内存的搬迁或者内存拷贝
	3、移动构造函数  
		在创建一个新对象时有一个旧的相同对象需要回收，
		这时就可以用移动构造函数把就对象直接给新对象
*/
class demo{
public:
    demo(int x = 0):xptr(new int(x)){
        cout << "Calling general constructor..." << x << endl;
    }
    demo(demo &n):xptr(new int(*n.xptr)){
        cout << "Calling copy constructor..." << *n.xptr << endl;
    }
    demo(demo &&n):xptr(n.xptr){	//移动构造函数
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
    demo b = c;
    demo c1(std::move(c));      //移动构造函数

    //cout << "c:" << c.getNum() << endl;

    return 0;
}