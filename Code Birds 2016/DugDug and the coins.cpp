#include <stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
    	long long n;
    	scanf("%lld",&n);
    	int ans=0;
    	while(n)
    	{
    		ans+=n%2;
    		n/=2;
    	}
    	printf("%d\n",ans);
    }
    return 0;
}

