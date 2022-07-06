#include <Arduino.h>
#include "TracerData.h"
#include "debug.h"

#include "EpeverTracer.h"

EpeverTracer tracer;

void setup()
{
    DebugBegin(115200);
    Serial.begin(115200);

    // Init the readings of rs485 from Tracer
    tracer.begin();

    DebugPrintln("Setup OK!");
    DebugPrintln("----------------------------");
    DebugPrintln();
}

void loop()
{   
    if (!tracer.update()) {
        DebugPrintln("Error reading Tracer");
    } else {
        TracerData *data = tracer.getData();
        
        if (data->everythingRead) {
            DebugPrint( "Battery Voltage: " );
            DebugPrintln( data->realtimeData.batteryVoltage );
        }
    }
    
    delay(1000);
}
