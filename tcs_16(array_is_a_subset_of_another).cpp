#include<iostream>
#include<algorithm>
#include<vector>
#include<map>
using namespace std;
int main()
{
	int arr[5]={1,3,4,5,2};
	int a[7]={2,4,3,1,7,5,15};
	map<int,int>m;
	m[1]={0};
	int c=1;
	for(int i=0;i<5;i++)
	{
		c++;
		m[arr[i]]+=1;
	}
	int d=1;
	for(int i=0;i<7;i++)
	{
		if(m[a[i]]==1)
		{
			d++;
		}
	}
	if(c==d)
	{
		cout<<"done";
	}
	else
	{
		cout<<"not done";
	}
}
