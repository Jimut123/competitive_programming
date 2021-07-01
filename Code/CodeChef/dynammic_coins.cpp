/**
 * Author :: Jimut Bahan Pal
 * Program to solve the coins problem, better than greedy algorithms. Finds the minimal no. of coins.
 * Dated :: 9/11/2018
 * 
 * Enter the amount :
        8
        Enter the no. of denominations :
        3
        Enter the denominations :
        1
        4
        6

        The denominations :
        1 4 6
        0 1 2 3 4 5 6 7 8
        1 0 1 2 3 4 5 6 7 8
        4 0 1 2 3 1 2 3 4 2
        6 0 1 2 3 1 2 1 2 3
        Calculating the minimum no. of coins required :
        The minimum no. of coins required : 2
 * */

#include<iostream>
#include <bits/stdc++.h>
int calculate_greedy(int amt, int mon)      //general greedy part 1
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
                    // the greedy algorithm in general, part 2
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
        if(arr[i][amt]<=min)        // finds the minimum no. of coins required in the heap
            min=arr[i][amt];
    }
    std::cout<<"The minimum no. of coins required : "<<min<<std::endl;
    return 0;
}
