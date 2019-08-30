#include <bits/stdc++.h>
using namespace std;
typedef long long int ull;

int main()
{
	ull t,n,sum,temp,a[10000],b[10000],count;
	cin>>t;
	while(t--)
	{
		sum=0;
        count=0;
		cin>>n;
		for(ull i=0;i<n;i++)
			cin>>a[i];
		for(ull i=0;i<n;i++)
			cin>>b[i];
		for(ull i=0;i<n;i++)
		{
			for(ull j=0;j<n;j++)
			{
				if(a[i]>=0 && b[j]>=0)
				{
					temp=a[i]+b[j];
					if(temp%2==0)
					{
						sum+=temp/2;
						a[i]=-1;
						b[j]=-1;
						count++;
                        break;
					}
				}
			}
		}
		if(count==n)
			cout<<sum<<endl;
        else
        {
            sort(a,a+n,greater<ull>());
            sort(b,b+n,greater<ull>());
            for(ull i=0;a[i]>=0;i++)
            {
                sum+=(a[i]+b[i])/2;
            }
            cout<<sum<<endl;
        }
	}
	return 0;
}