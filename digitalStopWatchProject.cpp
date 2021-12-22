#include<iostream>
#include<conio.h>
#define CYCLE 60
#include<unistd.h>
#include<stdlib.h>
using namespace std;
int main()
{
    int hours,minutes,seconds;
    cout<<"Enter your Hours,Minutes and Seconds  are : ";
    cin>>hours>>minutes>>seconds;
    system("cls");

    int h = 0, m = 0, s = 0;
    while(1)
    {
        cout<<h<<" : "<<m<< " : "<<s<<endl;
        if(h == hours && m == minutes && s == seconds)
        {
            break;
        }
        else
        {
            system("cls");
        }
        s++;
        sleep(1);
        if(s == CYCLE)
        {
            m++;
            s = 0;
        }
        if( m == CYCLE)
        {
            h++;
            m = 0;
        }

    }
}
