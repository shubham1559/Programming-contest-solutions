#include<stdio.h>
const long long mod=1e9+7;
int main()
{
  int t;
  scanf("%d",&t);
  while(t--)
  {
    int n;
    scanf("%d",&n);
    long sum=0,p;
    int i;
    for(i=0;i<n;i++)
    {
      scanf("%ld",&p);
      sum+=p;
    }
    sum%=mod;
    for(i=1;i<n;i++)
    {
      sum=(sum*2)%mod;
    }
    printf("%ld\n",sum);
  }
}
