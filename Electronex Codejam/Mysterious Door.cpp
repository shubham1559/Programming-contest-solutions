#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
int t;
int x,y,z;
double a[10100];
int i;
scanf("%d",&t);
for(i=0;i<t;i++)
{
scanf("%d%d%d",&x,&y,&z);
a[i]=(double)(3*x+2*y+z)/z;
printf("%.10lf\n",a[i]);
}
return 0;
}
