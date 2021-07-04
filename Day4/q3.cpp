#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int >arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int freq=0,val=0;
    for(int i=0;i<arr.size();i+=2)
        {
          while(arr[i]--)
                cout<<(arr[i+1])<<" ";
        }

}





