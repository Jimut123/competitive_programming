#include <bits/stdc++.h>

using namespace std;

// Complete the kaprekarNumbers function below.
void kaprekarNumbers(int p, int q) {
    long long num,sq,tsq,d,dig;
    long long num1,num2,found=0;
    for(long i=p;i<=q;i++)
    {
        num=i;
        sq=i*i;
        tsq=sq;
        dig=0;
        while(tsq!=0)
        {
            dig++;
            tsq=tsq/10;
        }
        if(dig%2==0)
        {
            num1=sq%(long long)pow(10,dig/2);
            num2=sq/(long long)pow(10,dig/2);
            if(num1+num2 == i)
            {
                found=1;
                cout<<i<<" ";
            }
        }
        else if(dig%2==1)
        {
            num1=sq/(long long)pow(10,(long long)dig/2+1);
            num2=sq%(long long)pow(10,(long long)dig/2+1);
       
            if(num1+num2 == i)
            {
                found=1;
                cout<<i<<" ";
            }
        }
    }
    if(!found)
        cout<<"INVALID RANGE";
}

int main()
{
    int p;
    cin >> p;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    int q;
    cin >> q;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    kaprekarNumbers(p, q);

    return 0;
}

