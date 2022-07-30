#include <Arduino.h>
#include "EpeverTracer.h"

EpeverTracer tracer;

void setup()
{
    // Init the readings of rs485 from Tracer
    tracer.begin();
}

void loop()
{   
    if (tracer.update()) {
        TracerData *data = tracer.getData();
        
        if (data->everythingRead) {
            data->realtimeData.batteryVoltage;
        }
    }
    
    delay(1000);
}
