#include "thread1.h"

thread1::thread1()
{

}

void thread1::run()
{
    while (j!=0)
    {
        if(k==1){i = i+1;}
        if(k==-1){i = i-1;}
        if(i==100){k = -1;}
        if (i == -100){k=1;}

        s = QString::number(i, 'g', 10000000);
        emit u->t1();

        if(i==0){this->msleep(100);} // just so that can be easy to catch the value zero.

        if(i==0 && check==1){this->msleep(stime);}

        else if (i!=0){check=0;stime = 10; this->msleep(stime);}
    }
}
