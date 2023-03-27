#include<iostream>
#include<math.h>
using namespace std;
void decimalToOctal(int num)
{
   int i,x,copyNum,z=0,y=1;
   copyNum=num;
   while(num>0)
   {
       x=num%8;
       z=z+(x*y);
       y=y*10;
       num=num/8;
   }
    cout<<"Octal conversion of decimal number "<<copyNum<<" is:"<<z;
}
int main()
{
    int num;
    cout<<"Enter a decimal number:";
    cin>>num;
    decimalToOctal(num);
}

