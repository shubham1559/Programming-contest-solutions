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
        ll ans=-1;
        ll mn=0;ll mx=1e11;
        while(mn<=mx){
            ll mid=(mn+mx)/2;
            ll val=zeroes(mid);
            if(val==n)
            {
                ans=mid;
                mn=mid+1;
            }else if(val<n) mn=mid+1;
            else mx=mid-1;
        }
        printf("%lld\n",ans);
    }
}
