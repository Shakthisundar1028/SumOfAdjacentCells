#include<iostream>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    int arr[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>arr[i][j];
        }
    }
    int x,y,sum=0;
    int diff[8][2]={{-1,-1},{-1,0},{-1,1},{0,-1},{0,1},{1,-1},{1,0},{1,1}};
    
    for(int i=0;i<8;i++){
        int ar=diff[i][0] + x;
        int ac=diff[i][1] + y;
        if(ar>=0 && ar<n && ac>=0 && ac<m){
            sum+=arr[ar][ac];
        }
    }
    cout<<sum<<endl;
}