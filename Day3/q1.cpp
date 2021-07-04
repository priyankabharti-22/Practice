#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int r,c,res;
    cin>>r>>c;
    vector<vector <int> > accounts(r, vector<int> (c, 0));
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cin>>accounts[i][j];
        }
    }
     int s=0,max=0,cust=0;
        for(int i=0;i<accounts.size();i++){
            s=0;
            for(int j=0;j<accounts[i].size();j++){
                s=s+accounts[i][j];
            }
            if(max<s){
                max=s;
                cust=i+1;
            }
        }
    cout<<cust;

}
