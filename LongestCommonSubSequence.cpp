#include<iostream>
#include<vector>
using namespace std;
int main(){
    string s1,s2;
    cin>>s1>>s2;
    int row=s1.length();
    int col=s2.length();
    int ar,ac;
    int dp[row+1][col+1];
    for(int i=0;i<=col;i++){
        dp[0][i]=0;
    }
    for(int i=1;i<row;i++){
        for(int j=1;j<col;j++){
            if(s1[i-1]==s2[j-1]){
                dp[i][j]=dp[i-1][j-1]+1;
                ar=i;
                ac=j;
            }else{
                dp[i][j]=0;
            }
        }
    }
    cout<<dp[ar][ac];
}