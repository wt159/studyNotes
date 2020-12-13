#include <iostream>
using namespace std;

class RTSPStream{
public:
    class RTSPCallback{
    public:
        virtual ~RTSPCallback(){};
        virtual void priCallback() = 0;
    };
public:
    RTSPStream(RTSPCallback *callback);
    ~RTSPStream();
    RTSPCallback *_callback;
};
RTSPStream::RTSPStream(RTSPCallback *callback)
{
    _callback = callback;
}

class RTSPCameraManager {
public:
    RTSPCameraManager();
    ~RTSPCameraManager();
    RTSPStream* getNance();
    void priCallback(void);
};
RTSPStream* RTSPCameraManager::getNance()
{
    RTSPStream *newStream = new RTSPStream(this);
    return newStream;
}
void RTSPCameraManager::priCallback(void)
{
    cout << "Calling priCallback suc!" << endl;
}

int main(void)
{
    RTSPCameraManager  a;
    RTSPStream *pStream = a.getNance();
    pStream->_callback->priCallback();

    return 0;
}