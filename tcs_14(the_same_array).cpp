#include<iostream>
#include<vector>
#include<algorithm>
#include<map>
using namespace std;
int main()
{
	vector<vector<int>>v={{1,2},{2,1},{3,4},{5,6},{4,3}};
		vector<vector<int>>x;
	vector<int>b;
	map<vector<int>,vector<vector<int>>>m;
	for(auto i:v)
	{
	for(auto h:i)
	{
		b.push_back(h);
	}
	std::sort(b.begin(),b.end());
	m[b].push_back(i);
	b.clear();
		}
	for(auto g:m)
	{
		
			for(auto f:g.second)
			{
	//	x.push_back(f);
			cout<<"(";
			for(auto r:f)
			{
				cout<<r<<" ";
			}
			cout<<")";
		}	
	}
	
	
	
}