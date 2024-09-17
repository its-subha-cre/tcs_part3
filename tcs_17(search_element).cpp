#include<iostream>
#include<vector>
using namespace std;
int main()
{
	int arr[5] = {1,2,3,4,5};
	int k=5;
	int l=0;
	int r=4;
	while(l<=r)
	{
		int mid=(l+r)/2;
				if(arr[mid]==k)
				{
					cout<<"done"<<mid;
					break;
				}
				else if(arr[mid]<k)
				{
					l=mid+1;
				}
				else if(arr[mid]>k)
				{
					r=mid-1;
				}
			
	}
	return 0;
	
}