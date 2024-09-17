#include<iostream>
#include<map>
using namespace std;
int main()
{
	int arr[7]={1,2,1,1,3,3,2};
	map<int,int>m;
	m[1]={0};
	for(int i=0;i<7;i++)
	{
	m[arr[i]]+=1;
		
	}
	for(auto i:m)
	{
		if(i.second>1)
		{
			for(int j=0;j<i.second;j++)
			cout<<i.first;
		}
	}
}