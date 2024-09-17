#include<iostream>
#include<algorithm>
#include<vector>
#include<set>
using namespace std;
void inside_array(int arr[],int n,int k)
{
for(int i=n;i>k;i--)
{
std::swap(arr[i],arr[i-1]);
}
arr[k]=11;
	for(int i=0;i<n+1;i++)
	{
		cout<<arr[i];
	}

}
void at_end(int arr[],int n)
{
	arr[n]=11;
	for(int i=0;i<n+1;i++)
	{
		cout<<arr[i];
	}
	
}
void at_beg(int arr[],int n)
{
	
	for(int i=n;i>0;i--)
	{
		std::swap(arr[i],arr[i-1]);
	}
	arr[0]=11;
	for(int i=0;i<n+1;i++)
	{
		cout<<arr[i];
	}
	
	
}
int main()
{
	int arr[8]={1,2,3,4,5,6,7,0};
	//inside_array(arr,7,5);
//out<<endl;
//	at_end(arr,7);

at_beg(arr,7);
	

}