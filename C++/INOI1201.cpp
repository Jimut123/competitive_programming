/*
 * Author :: Jimut Bahan Pal
 * Program to solve the coins problem, better than greedy algorithms. Finds the minimal no. of coins.
 * Dated :: 9/11/2018
 * 

3
18 7 6
23 10 27
20 9 14
74
*/

#include<iostream>
int main()
{
    long T,i,t,min_idx,j,min;
    std::cin>>T;
    long a[T][3];
    for(i=0;i<T;i++)
    {
        std::cin>>a[i][0]>>a[i][1]>>a[i][2];
    }
    // needed to sort it according to the 1st column, sorting according to the selection sort 
    for(i=0;i<T-1;i++)
    {
        min_idx = i;
        for(j=i+1;j<T;j++)
            if(a[j][0]<a[min_idx][0])
                min_idx =j;
            t=a[min_idx][0];
            a[min_idx][0] = a[i][0];
            a[i][0]=t;
            t=a[min_idx][1];
            a[min_idx][1] = a[i][1];
            a[i][1]=t;
            t=a[min_idx][2];
            a[min_idx][2] = a[i][2];
            a[i][2]=t;
    }
    /*
    // printing
    for(i=0;i<T;i++)
    {
        std::cout<<a[i][0]<<" "<<a[i][1]<<" "<<a[i][2]<<std::endl;
    }
    */
    int sum=0,dum;
    // need to find out the min one (sum)
    min=a[0][0]+a[0][1]+a[0][2];
    for(i=0;i<T;i++)
    {
        dum=a[i][0]+a[i][1]+a[i][2];
        if(dum<=min)
        {
            min=dum;
            j=i;
        }
    }
    //std::cout<<"min : "<<min<<" j : "<<j<<std::endl;
    for(i=0;i<T;i++)
    {
        sum+=a[i][0];
    }
    sum+=min;
    sum-=a[j][0];
    std::cout<<sum<<std::endl;
    return 0;
}