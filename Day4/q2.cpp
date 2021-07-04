#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int >arr1(n);
     string s;
    for(int i=0;i<n;i++){
        cin>>arr1[i];
    }
    cin>>s;
    string res=s;
    for(int i=0;i<n;i++){
        res[arr1[i]]=s[i];
    }
    cout<<res;

}




