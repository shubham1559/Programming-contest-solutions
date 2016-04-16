#include<stdio.h>
#include<string.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int base;
        char str[10009];
        scanf("%d %s",&base,str);
        int i=0,ans=0;
        for(i=strlen(str)-1;i>=0;i--,ans++)
        {
            if(str[i]!='0')
                break;
         }
       if(i>=0) 
        printf("%d\n",ans);
       else 
        printf("-1\n");
 }
    return 0;
}
