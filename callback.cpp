#include <iostream>

class RTSPCallback
{
public:
    virtual ~RTSPCallback(){};
    virtual void priCallback() = 0;
};
class RTSPStream
{
public:
    RTSPStream(RTSPCallback *callback);
    ~RTSPStream();
    void showCallback();
private:
    RTSPCallback *_callback;
};
RTSPStream::RTSPStream(RTSPCallback *callback)
{
    _callback = callback;
}
void RTSPStream::showCallback()
{
    if(_callback)
    {
        _callback->priCallback();
    }
}

class RTSPCameraManager: public RTSPCallback
{
public:
    RTSPCameraManager(){
        std::cout << "start constructor... " << std::endl;
    }
    ~RTSPCameraManager(){
        std::cout << "end destructor... " << std::endl;
    }
    RTSPStream* getInstance();
    void priCallback(void);
};
RTSPStream* RTSPCameraManager::getInstance()
{
    RTSPStream *newStream = new RTSPStream(this);
    return newStream;
}
void RTSPCameraManager::priCallback(void)
{
    std::cout << "Calling priCallback suc!" << std::endl;
}

int main(void)
{
    RTSPCameraManager  a;
    RTSPStream *pStream = a.getInstance();
    pStream->showCallback();

    return 0;
}