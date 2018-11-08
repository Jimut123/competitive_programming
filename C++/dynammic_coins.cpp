#include<iostream>
#define CONST 10
// TODO
int calculate_greedy(int amt, int mon)
{
    int c=0;
    if (amt<mon)
        return 0;
    while(amt>=mon)
    {
        amt-=mon;
        c++;
    }
    return c;
}
int main()
{
    int num_deno,dum;
    int amt,i,j,rem;
    std::cout<<"Enter the amount : "<<std::endl;
    std::cin>>amt;
    std::cout<<"Enter the no. of denominations : "<<std::endl;
    std::cin>>num_deno;
    int deno[num_deno], arr[num_deno][amt+1];
    std::cout<<"Enter the denominations : "<<std::endl;
    for(i=0;i<num_deno;i++)
    {
        std::cin>>deno[i];
    }
    // decorations ------------------
    std::cout<<"\nThe denominations : "<<std::endl;
    for(i=0;i<num_deno;i++) std::cout<<deno[i]<<" ";
    std::cout<<std::endl<<"  ";
    for(j=0;j<=amt;j++) std::cout<<j<<" ";
    std::cout<<std::endl;
    // decorations ------------------

    int kount=0,l,num,n_sum;
    for (i=0;i<num_deno;i++)
    {
        for(j=0;j<=amt;j++)
        {
            arr[i][j] =  calculate_greedy(j,deno[i]);//j/deno[i];
            if(i>0)
            {
                if(deno[i]>j)
                    arr[i][j] = arr[i-1][j];
                else
                {
                    // the greedy algorithm in general
                    kount=0;
                    n_sum = j;
                    for(l=i;l>=0;l--)
                    {
                        num = deno[l];
                        while(n_sum>=num)
                        {
                            n_sum-=num;
                            kount++;            //calculates the no. of coins
                        }
                    }
                    arr[i][j] = kount;
                } 
            }
            if(j==0)
                arr[i][j] = 0;
        }
    }
    for (i=0;i<num_deno;i++)
    {
        std::cout<<deno[i]<<" ";
        for(j=0;j<=amt;j++)
        {
            std::cout<<arr[i][j]<<" ";
        }
        std::cout<<std::endl;
    }
    std::cout<<"Calculating the minimum no. of coins required :"<<std::endl;
    int min = arr[0][amt];
    for(i=0;i<num_deno;i++)
    {
        if(arr[i][amt]<=min)
            min=arr[i][amt];
    }
    std::cout<<"The minimum no. of coins required : "<<min<<std::endl;
    return 0;
}
