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
    int *p,*q;
    p=&nums[0];
    q=&nums[n/2];
    vector<int>a(n);
    for(int i=0;i<n;i++){
        if(i%2==0)
        {
            a[i]=*p;
            p++;
        }
        else{
            a[i]=*q;
            q++;
        }
    }
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
}

