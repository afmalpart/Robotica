#ifndef ejemplo1_H
#define ejemplo1_H

#include <QtGui>
#include "ui_counterDlg.h"
//#include <QTimer>
#include <QLCDNumber>
#include "timer.h"

class ejemplo1 : public QWidget, public Ui_Counter
{
Q_OBJECT
private:
    Timer timer;
public:
    ejemplo1();
    int contador;
    //QTimer *timer;
    bool stop;
    virtual ~ejemplo1();
    
public slots:
	void doButton();
    void incrementarContador();
};

#endif // ejemplo1_H
