#include<iostream>
#include<math.h>
int  binaryToDecimal(int x);
int  decimalToOctal(int y);
using namespace std;
void binaryToOctal(int num1)
{
    int no=num1;
    int num2;
    num2=binaryToDecimal(no);
    int num3;
    num3=decimalToOctal(num2);
    cout<<"Decimal conversion of binary value "<<num1<<" is:"<<num3;
}
int  binaryToDecimal(int no)
{
    int x,sum=0,z;
    z=no;
    int d=0;
    while(z>0)
       {
        x=z%10;
        sum=sum+(x*(pow(2,d)));
        d++;
        z=z/10;
      }
    return sum;
}
int  decimalToOctal(int num)
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
    return z;
}
int main()
{
    int num;
    cout<<"Enter a binary number:"; //try to enter a number in the range of integer datatype
    cin>>num;
    binaryToOctal(num);
}



