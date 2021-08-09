import java.io.*;
class Lucky
{
	public static void print_array(int arr[], int N)
	{
		int i;
		for (i=0;i<N;i++)
		      System.out.print(arr[i]+" ");
		System.out.println();
	}
    	public static void main(String args[])throws IOException
    	{
		InputStreamReader ab = new InputStreamReader(System.in);
		BufferedReader cd = new BufferedReader(ab);
		//luck_obj = new Lucky();
		int i, j, N, count=0, count1=0;
		System.out.println("Enter the number of elements: ");
		N = Integer.parseInt(cd.readLine());
		int luck[] = new int[N];
		int temp_luck[] = new int[N];
		// creating the array
		for(i=0;i<N;i++)
		{
		    luck[i]=i+1;
		}
		// remove till N times
		//System.out.println("1");
		for(i=2;i<=N;i++)
		{
		    for(j=i-1;j<N;j+=i)
		    {
			    luck[j] = 0;
			    if(j+i>N)
			    {
				    for(int k = j+1;k<N;k++)
				    {
					    //System.out.println("**"+luck[k]);
					    luck[k]=0;
				    }
			    }
		    }
			// System.out.println("2");
		    // print_array(luck,N);
			
		    count = 0;
		    // store the luck array into temp
		    for(j=0;j<N;j++)
		    {
			    if (luck[j] != 0)
			    {
				    temp_luck[count] = luck[j];
					count+=1;
					// System.out.println(temp_luck[count]);
				    // again initialize to 0, luck array
				    luck[j] = 0;
			    }
		    }
			// System.out.println("2 temp arr");
		    // print_array(temp_luck,N);
		    count1=count;
		    count = 0;
		    for(j=0;j<=count1;j++)
			{
			    luck[j] = temp_luck[count] ;
				temp_luck[count] = 0;
				count++;
			}
			// System.out.println("3");
		    //print_array(luck,N);
		}
		
		System.out.println("Lucky Numbers till "+N+" : ");
		for(j=0;j<N;j++)
		{
			if(luck[j]>0)
			{
				System.out.println(luck[j]);
			}
		}
	}
}
