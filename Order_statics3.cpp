#include<iostream>
#include<algorithm>

int main(){
	int t;
	std::cin>>t;
	while (t--)
	{
		int n,k;
		std::cin>>n>>k;
		int arr[n*n];
		for (int i = 0; i < n*n; i++)
		{
			std::cin>>arr[i];
		}
		std::sort(arr,arr+n*n);
		std::cout<<arr[k-1]<<std::endl;
	}
	
}