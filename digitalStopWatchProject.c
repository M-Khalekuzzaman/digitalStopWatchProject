#include<stdio.h>
#include<conio.h>
#define CYCLE 60
#include<unistd.h>
int main()
{
    int hours,minutes,seconds;
    printf("Enter your Hours,Minutes and Seconds are :  ");
    scanf("%d%d%d", &hours, &minutes, &seconds);
    system("CLS");
    int h = 0, m = 0, s = 0;
    while(1)
    {
        printf("%.2d : %.2d : %.2d \n",h,m,s);
        if(h == hours && m == minutes && s == seconds)
        {
            break;
        }
        else
        {
            system("CLS");
        }

        s ++;
        sleep(1);
        if(s == CYCLE)
        {
            m ++;
            s = 0;
        }
        if( m == CYCLE)
        {
            h ++;
            m = 0;
        }

    }

    return 0;
}
