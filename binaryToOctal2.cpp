#include<iostream>
#include<math.h>
int  binaryToDecimal(int x);
using namespace std;
void binaryToOctal(int num1)
{
    int cnt,i,x,num2,num3,num4;
    i=1;
    num2=0;
    cnt=0;
    num4=0;
    int a=1;
    int no=num1;
    while(no>0)
    {
        x=no%10;
        num2=num2+(x*i);
        i=i*10;
        cnt++;
        if(cnt==3)
        {
            num3=binaryToDecimal(num2);
            num4=num4+(num3*a);
            a=a*10;
            cnt=0;
            num2=0;
            i=1;
        }
        no=no/10;
    }
    int num5=binaryToDecimal(num2);
     num4=num4+(num5*a);
    cout<<"Octal conversion of binary number "<<num1<<" is:"<<num4;
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

int main()
{
    int num;
    cout<<"Enter a binary number:"; //try to enter a number in the range of integer datatype
    cin>>num;
    binaryToOctal(num);
}




