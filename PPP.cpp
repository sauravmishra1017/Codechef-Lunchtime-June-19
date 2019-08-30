#include <iostream>
using namespace std;
typedef unsigned long long int ull;

int main()
{
	ull t,x,y,k,temp;
	cin>>t;
	while(t--)
	{
		cin>>x>>y>>k;
		temp=(x+y)/k;
		if(temp%2==0)
			cout<<"Paja"<<endl;
		else
			cout<<"Chef"<<endl;
	}
	return 0;
}