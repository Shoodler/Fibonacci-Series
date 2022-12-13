#include <iostream>
#include <conio.h>
using namespace std;

int main(void)
{
    double a,b,c,d,e;
    system ("cls");
    cout<<"Fibonacci sequence term generator\n";
    cout<<"Enter term to generate\n";
    cin>>a;
    c=0;
    d=1;
    for (e=2;e<=a;e++)
    {
        b=c+d;
        c=d;
        d=b;
    }
    if (a==1)
        cout<<"st term is "<<b;
    else if (a==2)
        cout<<"nd term is "<<b;
    else
        cout<<a<<"th term is "<<b;
    getch();
}
