#include<bits/stdc++.h>
using namespace std;
void solve()
{

    int n=3;
    //cin >>n;

    vector<int>v1;
    v1.push_back(10); //input v1 elements
    v1.push_back(20);
    v1.push_back(30);

    vector<int>v2;
    v2.push_back(40); //input v1 elements
    v2.push_back(50);
    v2.push_back(60);

    cout<<"AFTER swapping : "<<endl;

    for(int i=0; i<n; i++)
    {
        cout<<v1[i]<<" "; //output v1 elements
    }
    cout<<endl;

    for(int i=0; i<n; i++)
    {
        cout<<v2[i]<<" "; //output v2 elements
    }
    cout<<endl;

    cout<<"BEFORE swapping : "<<endl;
    swap(v1,v2);
    for(int i=0; i<n; i++)
    {
        cout<<v1[i]<<" ";
    }
    cout<<endl;

    for(int i=0; i<n; i++)
    {
        cout<<v2[i]<<" ";
    }
    cout<<endl;
}
int main()
{
    int t=1;
    //cin >>t;
    while(t--)
    {
        solve();
    }
}

