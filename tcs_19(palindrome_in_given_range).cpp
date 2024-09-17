#include<iostream>
#include<vector>
using namespace std;
int main()
{
	int min=10;
	int max=50;
	int d;
	int k;
	int s=0;
	for(int i=min;i<=max;i++)
	{
	 k=i;
	 	int s=0;
		while(k!=0)
		{
			
		 d=k%10;
		s=s*10+d;
		//cout<<s;
		k=k/10;
		}
		if(s==i)
		{
			cout<<i<<endl;
			
		}
}}