#include<stdio.h>
#include<string.h>
int main()
{
int t;
scanf("%d\n",&t);
while(t--)
{
char str[10005];
int arr[30];
scanf("%s",str);
memset(arr,-1,sizeof arr);
int ans=0;
for(int i=0;str[i];i++)
{
int index=str[i]-'a';
if(arr[index]==-1)arr[index]=i;
else if(ans<i-arr[index])ans=i-arr[index];
}
printf("%d\n",ans);
}
return 0;
}
