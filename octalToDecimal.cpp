#include<iostream>
#include<math.h>
using namespace std;
void octalToDecimal(int num)
{
    int digit,i,copyNum,sum=0;
    i=0;
    copyNum=num;
    while(num>0)
    {
        digit=num%10;
        sum=sum+(digit*(pow(8,i)));
        num=num/10;
        i++;
    }
    cout<<"Decimal conversion of octal number "<<copyNum<<" is:"<<sum;

}
int main()
{
    int num;
    cout<<"Enter an octal number:";
    cin>>num;
    octalToDecimal(num);
}
