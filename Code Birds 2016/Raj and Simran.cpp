#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
      string s ;char c;
      cin>>s>>c;
      int i=0,ans=0;
      while(s[i]){
        ans+=(s[i]==c);
        i++;
      }
      cout<<ans<<endl;
    }
  return 0;   
}
