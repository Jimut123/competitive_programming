#include <bits/stdc++.h>
#define HOUR_GLASS_WIDTH 3
#define HOUR_GLASS_HEIGHT 3
using namespace std;


int main()
{
    vector<vector<int>> arr(6);

    int num=0,sum=0;
    for (int i = 0; i < 6; i++) {
        arr[i].resize(6);

        for (int j = 0; j < 6; j++) {
            cin >> arr[i][j];
        }

        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }
    
    for(int i=0;i<=6-HOUR_GLASS_HEIGHT;i++)
    {
	    for(int j=0;j<=6-HOUR_GLASS_WIDTH;j++)
	    {
		    //cout<<arr[i][j]<<arr[i][j+1]<<arr[i][j+2]<<"\n"<<arr[i+1][j+1]<<"\n"<<arr[i+2][j]<<arr[i+2][j+1]<<arr[i+2][j+2]<<"\n";

		    sum = arr[i][j]+arr[i][j+1]+arr[i][j+2]+arr[i+1][j+1]+arr[i+2][j]+arr[i+2][j+1]+arr[i+2][j+2];
		    if(sum>num)
			    num=sum;
	    }
	    //cout<<"\n";
    }
    cout<<num;
    return 0;
}

