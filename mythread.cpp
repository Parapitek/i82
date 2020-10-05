#include "mythread.h"

MyThread::MyThread(QObject *w) : QThread (w)
{

}

void MyThread::run() {
    for (int i = 0; i < 20; i++) {
        qDebug() << "hello";
        QThread::sleep(5);
    }
}
