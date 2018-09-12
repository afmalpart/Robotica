#ifndef TIMER_H
#define TIMER_H
#include <QThread>

class Timer: public QThread
{
Q_OBJECT 
private:
    int periodo;
    bool corriendo;

public:
    Timer();

    void run();
    void TimerStart(int _periodo);
    void stop();
    void setPeriod(int _periodo);


signals:
    void timeout();
};

#endif // TIMER_H
