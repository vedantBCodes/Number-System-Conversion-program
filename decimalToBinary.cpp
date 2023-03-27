#include<iostream>
#include<cmath>
using namespace std;
main()//program to convert decimal number into binary number
{
    int i=1,no,rem,y=0,z;
    cout<<"enter a decimal number:";
    cin>>no;
    z=no;
while(no>0)
   {rem=no%2;
    y=y+(rem*i);
   no=no/2;
    i=i*10;
    }
cout<<"binary conversion of decimal number "<<z<<" is:"<<y;
}

