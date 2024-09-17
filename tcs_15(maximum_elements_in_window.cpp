#include<iostream>
#include<algorithm>
#include<vector>
#include<map>
using namespace std;
int main()
{
	int arr[8]={1,2,-1,-3,5,3,6,7};
	int k=3;
	int max1=0;
	vector<int>v;
	vector<int>b;
	for(auto i:arr)
	{
		b.push_back(i);
	}
	std::sort(b.begin(),b.end());
	for(int i=-1;i<5;i++)
	{
		for(int j=i+1;j<i+4;j++)
		{
			max1=max(max1,b[j]);
		}
		v.push_back(max1);
	}
	for(auto y:v)
	{
		cout<<y;
	}
}