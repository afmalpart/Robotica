#include "timer.h"

Timer::Timer()
{
    corriendo=false;
    periodo=1000;
}    
    void Timer::run(){
        
        while(corriendo){
            msleep(1000);
            if(corriendo){
                emit timeout();
            }
        }    
    }

    void Timer:: TimerStart(int _periodo){
        this->periodo=_periodo;
        this->corriendo=true;
        this->start();


        }
    }

    void Timer:: stop(){
        this->corriendo=false;

    }

    void Timer:: setPeriod(int _periodo){
        this->periodo=_periodo;
    }


