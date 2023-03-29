#include<iostream>
#include<math.h>
int  binaryToDecimal(int x);
int reverseNumber(int x);
int countDigits(int x);
using namespace std;
void binaryToHexadecimal(int num1)
{
    int cnt,i,x,num2,num3,num4,arr[10],b=0;
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
        if(cnt==4)
        {
        num3=binaryToDecimal(num2);
        arr[b]=num3;
        b++;
           // cout<<num3<<endl;
            a=a*10;
            cnt=0;
            num2=0;
            i=1;
        }
        no=no/10;
    }
    int num5=binaryToDecimal(num2);
    arr[b]=num5;
    cout<<"Hexadecimal conversion of binary number "<<num1<<" is:";
    for(i=b;i>=0;i--)
    {
        if((arr[i]>=1)&&(arr[i]<=9))
        {
            cout<<arr[i];
        }
        else
        {
         switch(arr[i])
    {
    case 10:cout<<"A";break;
    case 11:cout<<"B";break;
    case 12:cout<<"C";break;
    case 13:cout<<"D";break;
    case 14:cout<<"E";break;
    case 15:cout<<"F";break;
    }
        }
    }
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
    int num;
   cout<<"Enter a binary number:"; //try to enter a number in the range of integer datatype
   cin>>num;
    binaryToHexadecimal(num);
}





