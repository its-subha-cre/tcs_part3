#include<iostream>
#include<vector>
using namespace std;
int main()
{
	int n=4554;
	int k;
	int z=n;
	int s=0;
	while(n!=0)
	{
		 k=n%10;
		s=s*10+k;
		//cout<<s;
		n=n/10;
	}
	if(s==z)
	{
		cout<<"palindrome";
	}
	else
	{
		cout<<"not";
	}
}