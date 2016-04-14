#include<stdio.h>
int main()
{
  int t;
  scanf("%d",&t);
  while(t--)
  {
    int n,m,sum,p;
    sum=0;
    scanf("%d%d",&n,&m);
    while(m--)
    {
      scanf("%d",&p);
      sum^=p;
    }
    printf("%ld\n",sum);
  }
}
