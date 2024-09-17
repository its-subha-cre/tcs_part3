#include<iostream>
#include<vector>
#include<algorithm>
#include<map>
using namespace std;
int main()
{
	vector<int>v={6,2,3,4,1,5};
	map<int,int>m;
	std::sort(v.begin(),v.end());
	for(int i=0;i<v.size();i++)
	{
		m[v[i]]+=1;
	}
	int c=0;
	int p=1;
for(int i=v.size()-1;i>=0;i--)
{
	if(m[v[i]]==1)
	{
		p=p*v[i];
		c++;
	}
	if(c==2)
	{
		break;
	}
}
cout<<p;	
}