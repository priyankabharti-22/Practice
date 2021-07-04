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
   for(int i=0;i<arr.size();i++)
        {
            int d=0;
            for(int j=0;j<arr.size();j++)
            {
                if(arr[i]>arr[j]&&i!=j)
                    d++;
            }
            cout<<d<<" ";
        }
}



