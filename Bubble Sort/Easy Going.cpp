#include <iostream>
using namespace std ;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,m,temp,max_sum=0,min_sum=0;
		cin>>n>>m;
		int arr[n];
		for(int i=0;i<n;i++)
		{
			cin>>arr[i];
		}
		for(int i=0;i<n;i++)
		{
			for(int k=0;k<n-i-1;k++)
			{
				if(arr[k]>arr[k+1])
				{
					temp=arr[k];
					arr[k]=arr[k+1];
					arr[k+1]=temp;
				}
			}
		}
		for(int i=m;i<n;i++)
		{
			max_sum+=arr[i];
		}
		for(int i=0;i<n-m;i++)
		{
			min_sum+=arr[i];
		}
		int result=abs(max_sum-min_sum);
		cout<<result<<endl;
	}
return 0;
}
