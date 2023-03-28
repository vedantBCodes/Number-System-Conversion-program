#include<iostream>
using namespace std;
int decimalToBinary(int x);
int reverseNumber(int x);
int countDigits(int x);
void octalToBinary(int num3)
{
    int x,num2,num1,cnt=0;
    int cnt2=countDigits(num3);
    cout<<"Binary conversion of octal number "<<num3<<" is:";
    num1=reverseNumber(num3);
    while(num1>=0)
    {
        x=num1%10;
        cnt++;
        num2=decimalToBinary(x);
        if(x>3)
        {
        cout<<num2;
        }
        else if((x==0)||(x==1))
            {
                cout<<"00";
                cout<<num2;
            }
        else if((x==2)||(x==3))
            {
                cout<<"0";
                cout<<num2;
            }
        num1=num1/10;
        if(cnt==cnt2)
        {
            break;
        }
    }
}
int decimalToBinary(int no)
{
     int i=1,rem,y=0,z;
    z=no;
while(no>0)
   {rem=no%2;
    y=y+(rem*i);
   no=no/2;
    i=i*10;
    }
return y;
}
int reverseNumber(int num)
{
    int rev=0;
    while(num>0)
    {
        int x=num%10;
        rev=x+(rev*10);
        num=num/10;
    }
    return rev;
}
int countDigits(int x)
{
    int z,cnt=0;
    while(x>0)
    {
        z=x%10;
        cnt++;
        x=x/10;
    }
    return cnt;
}
int main()
{
    int x;
    cout<<"Enter an octal number:";
    cin>>x;
    octalToBinary(x);
}
