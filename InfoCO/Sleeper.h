/*
*
*/
#include <QtGui>
#include <Qt>

class Sleeper: public QThread
{
    public:
        static void msleep(int ms)
        {
            QThread::msleep(ms);
        }
};