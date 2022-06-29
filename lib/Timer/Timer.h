#include <Arduino.h>

#ifndef Timer_h
#define Timer_h

class Timer {
    private:
        int _delayTime  = 500;
        long _startTime = 0;
    public:
        Timer ();
        Timer (int delayTime);
        void setDelayTime (int delayTime);
        void reset ();
        bool expired ();
};

#endif