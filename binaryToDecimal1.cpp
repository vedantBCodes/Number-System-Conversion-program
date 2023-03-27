#include<iostream>
#include<math.h>
using namespace std;
void binaryToDecimal(int no)           //program to convert binary number into decimal number
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
    cout<<"the decimal conversion of binary number "<<no<<" is:"<<sum;
}
int main()
{
    int num;
    cout<<"Enter a binary number:";
    cin>>num;
    binaryToDecimal(num);
}

