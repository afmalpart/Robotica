#include "ejemplo1.h"

ejemplo1::ejemplo1(): Ui_Counter()
{
	setupUi(this);
    contador=0;
   // timer=new QTimer(this);
   // timer->start(1000);
    stop=false;


	show();
	connect(button, SIGNAL(clicked()), this, SLOT(doButton()) );
    connect(&timer, SIGNAL(timeout()), this, SLOT(incrementarContador()) );
    lcdNumber->display(contador);
    
    timer.start();

}

ejemplo1::~ejemplo1()
{}

void ejemplo1::doButton()
{
	qDebug() << "click on button";
    if(!stop){
        timer.stop();
        stop =true;
    }else{
        timer.TimerStart(1000);
        stop=false;
    }
}

void ejemplo1::incrementarContador()
{
    qDebug() << "incrementado contador";
    contador++;
    lcdNumber->display(contador);
}




