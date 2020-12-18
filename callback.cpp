#include <iostream>

class B
{
public:
    virtual ~B(){};
    virtual void priCallback() = 0;
};
class C
{
public:
    C(B *callback);
    ~C();
    void showCallback();
private:
    B *_callback;
};
C::C(B *callback)
{
    _callback = callback;
}
void C::showCallback()
{
    if(_callback)
    {
        _callback->priCallback();
    }
}

class A: public B
{
public:
    A(){
        std::cout << "start constructor... " << std::endl;
    }
    ~A(){
        std::cout << "end destructor... " << std::endl;
    }
    C* getInstance();
    void priCallback(void);
};
C* A::getInstance()
{
    C *newStream = new C(this);
    return newStream;
}
void A::priCallback(void)
{
    std::cout << "Calling priCallback suc!" << std::endl;
}

int main(void)
{
    A  a;
    C *pStream = a.getInstance();
    if(nullptr != pStream )
    {
        pStream->showCallback();
    }

    return 0;
}