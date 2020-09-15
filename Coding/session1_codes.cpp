#include<bits/stdc++.h>
using namespace std;

int main() {

   int t;
   cin>>t;
   while(t--){
    int n;
   cin>>n;
   int arr[26];
    for(int i=1;i<10;i++){
        cin>>arr[i];
    }

    int dp[n+1];
    memset(dp,-1,sizeof(dp));
    dp[0]=0;
    for(int i=1;i<=n;i++){
       int ans=INT_MIN;
        for(int j=1;j<10;j++){
           if(i-arr[j]>=0&&dp[i-arr[j]]!=-1){
               ans=max(ans,dp[i-arr[j]]);
           }
       }
        if(ans!=INT_MIN){
            dp[i]=ans+1;
        }
     }
     int maxy=0;
     for(int i=1;i<=n;i++){
        maxy=max(maxy,dp[i]);
     }
     set<string> temp;
    for(int i=1;i<=n;i++){
        if(dp[i]==maxy){
        int s=i;
        string ans="";
        while(s>0){
            int val=dp[s];
            char ch;
            int d;
            for(int i=1;i<10;i++){
                if(s-arr[i]>=0&&dp[s-arr[i]]==val-1){
                    ch='0'+(i-0);
                    d=arr[i];
                }
            }
            ans.push_back(ch);
            s=s-d;
        }
        sort(ans.begin(),ans.end());
        reverse(ans.begin(),ans.end());
       temp.insert(ans);
        }
    }
    if(temp.size()==0){
        cout<<"-1"<<endl;
    }else{
      string ans=*(temp.rbegin());
      cout<<ans<<endl;
    }

   }
}