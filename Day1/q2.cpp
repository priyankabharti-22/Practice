#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int>num(n);
    for(int i=0;i<n;i++)
    {
        cin>>num[i];
    }
    int j=n-1;
    int key;
    cin>>key;
    for(int i=0;i<n;i++)
    {

        if(num[i]==key)
        {
           num[i]=num[j];
           j--;
        }
    }
    cout<<j+1;

}

