#include "Timer.h"

Timer::Timer () {}
Timer::Timer (int delayTime) {
    this->setDelayTime( delayTime );
}

void Timer::setDelayTime (int delayTime) {
    this->_delayTime = delayTime;
}

bool Timer::expired () {
    int timeSinceLast = (millis() - this->_startTime);
    if(timeSinceLast >= this->_delayTime) {
        this->reset();
        return true;
    }
    return false;
}

void Timer::reset () {
    this->_startTime = millis();
}