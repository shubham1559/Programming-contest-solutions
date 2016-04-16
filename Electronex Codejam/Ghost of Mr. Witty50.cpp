#include<stdio.h>
typedef long long ll;
ll zeroes(ll n)
{
    if(n==0)return 0;
    return n/5+zeroes(n/5);
}
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        ll n;
        scanf("%lld",&n);
        ll ans=0;
        ll mn=0;ll mx=1e11;
        ans=-1;
        for(ll i=4;i<=5000;i+=5)
        {
        	if(zeroes(i)==n)
        	{
        		ans=i;
        		break;
        	}
        }
        printf("%lld\n",ans);
    }
}
