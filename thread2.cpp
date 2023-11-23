#include "thread2.h"

thread2::thread2()
{

}

void thread2::run()
{
    if(i==0)
    {
        emit u->t2();
    }
    this->msleep(10);
}
