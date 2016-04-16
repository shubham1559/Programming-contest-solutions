#include<stdio.h>
#include<string.h>
typedef long long ll;
ll arr[10010];
ll inp[10010];
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n,m;
        scanf("%d %d",&n,&m);
        memset(arr,0,sizeof arr);
        ll i,j;
        arr[0]=1;
        for(i=0;i<n;i++)
        {
            scanf("%lld",&inp[i]);
            for(j=inp[i];j<=10000;j++)
            {
                arr[j]=arr[j]||arr[j-inp[i]];
            }              
        }
        for(j=1;j<=10000;j++)
            arr[j]+=arr[j-1];
        while(m--)
        {
            ll l,r;
            scanf("%lld %lld",&l,&r);
            printf("%lld\n",arr[r]-arr[l-1]);
        }
    }
    return 0;
}
