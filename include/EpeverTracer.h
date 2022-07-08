#include <SimpleTimer.h>
#include <ModbusMaster.h>
#include "TracerData.h"

#ifndef EpeverTracer_h
#define EpeverTracer_h

class EpeverTracer
{
private:
    ModbusMaster _node;
    SimpleTimer _timer;
    TracerData _data;
    uint8_t _result;

    int _delayTime = 2000; // Must read each 2 seconds

    void AddressRegistry_2000();
    void AddressRegistry_200C();

    void AddressRegistry_3000();
    void AddressRegistry_300E();

    void AddressRegistry_3100();
    void AddressRegistry_310C();
    void AddressRegistry_3110();
    void AddressRegistry_311A();
    void AddressRegistry_311D();

    void AddressRegistry_3200();

    void AddressRegistry_3300();
    void AddressRegistry_3310();
    void AddressRegistry_330A();
    void AddressRegistry_331B();

    void AddressRegistry_9013();

    void readManualCoil();
    void readLoadTestAndForceLoadCoil();

    void updateCurrentRegistryNumber();
    void updateNextRegistryEntry();
    

public:
    EpeverTracer();
    TracerData* getData();
    void begin();
    bool update();
};

#endif
