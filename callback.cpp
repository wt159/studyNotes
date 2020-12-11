#include <iostream>

namespace XYDEV {

class RTSPCameraManager {
public:
    RTSPCameraManager();
    ~RTSPCameraManager();
    start();
    stop();
private:
    void priCallback(void);
}
void RTSPCameraManager::priCallback(void)
{
    cout << "Calling priCallback suc!" << endl;
}

}

namespace XYDEVC{

class RTSPStream{
    class RTSPCallback{
        virtual ~RTSPCallback(){};
        virtual void priCallback() = 0;
    }
public:
    RTSPStream();
    ~RTSPStream();
    start();
    stop();
private:
}

}