#include<bits/stdc++.h>
 
void processing(long long *A,long long n)
{
	for(long long i=0;i<n-1;i++)
	{
		if(A[i+1]!=0 && A[i]==A[i+1]) 
		{
			A[i] *= 2;
			A[i+1] = 0;
		}
	}
 
}
 
int main()
{
 
	long long t;
	std::cin>>t;
	while(t--)
	{
 
		long long n,count=0;
		std::cin>>n;
		long long arr[n];
		for(long long i=0;i<n;i++) std::cin>>arr[i];
 
 
		processing(arr,n);
		for(long long i=0;i<n;i++)
		{
			if(arr[i]!=0)
			{
				count++;
				std::cout<<arr[i]<<" ";
			}
		}
		for(long long i=0;i<n-count;i++)
		{
			std::cout<<0<<" ";
		}
		std::cout<<std::endl;
	}
 
	return 0;	
}