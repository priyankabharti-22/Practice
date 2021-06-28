#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int>nums(n);
    for(int i=0;i<n;i++)
    {
        cin>>nums[i];
    }
    int i,j=0;
    if(n==0)
        cout<<0;
    else{
    for( i=0;i<n-1;i++)
    {
        if(nums[i]!=nums[i+1])
            nums[j++]=nums[i];
    }
    nums[j++]=nums[n-1];
    cout<<j;
    }
}
