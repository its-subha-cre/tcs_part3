#include<iostream>
#include<map>
#include<vector>
using namespace std;
int main()
{
	int arr[7]={1,1,2,2,3,4,4};
	map<int,int>m;
	m[1]={0};
	for(int i=0;i<7;i++)
	{
		m[arr[i]]+=1;
	}
	for(auto i:m)
	{
		if(i.second==1)
		{
			cout<<i.first<<endl;
		}
	}
	
}