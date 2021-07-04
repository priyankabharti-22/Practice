#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,extra;
    cin>>n;
    vector<int >candies(n);
    for(int i=0;i<n;i++){
        cin>>candies[i];
    }
    cin>>extra;
    int max=*max_element(candies.begin(),candies.end());
        for(int i=0;i<candies.size();i++)
        {
            if(candies[i]+extra>=max)
               cout<<"true ";
            else
               cout<<"false ";
        }

}

