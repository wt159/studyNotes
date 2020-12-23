#include <iostream>

/*
*   A类:
*   B：基类
*   C类：要调用A的成员函数priCallback();
*/

class B
{
public:
    virtual ~B(){};
    virtual void priCallback() = 0;
};

class C
{
public:
    C(B *callback):_callback(callback){};
    ~C();
    void showCallback();
private:
    B *_callback;
};
void C::showCallback()
{
    if (_callback)
    {
        _callback->priCallback();
    }
}

class A : public B
{
public:
    A(){
        std::cout << " constructor... " << std::endl;
    }
    ~A(){
        std::cout << " destructor... " << std::endl;
    }
    C *getInstance(){
        C *newStream = new C(this);
        return newStream;
    }
private:
    void priCallback(void){
        std::cout << "Calling priCallback suc!" << std::endl;
    }
};

int main(void)
{
    A a;
    C *pStream = a.getInstance();
    if (nullptr != pStream)
    {
        pStream->showCallback();
    }

    return 0;
}