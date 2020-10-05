#ifndef MYTHREAD_H
#define MYTHREAD_H

#include <QThread>
#include <QDebug>

class MyThread : public QThread {
public:
    MyThread(QObject*);
    void run();
};

#endif // MYTHREAD_H
