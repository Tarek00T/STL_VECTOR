#include<bits/stdc++.h>
using namespace std;
void sorting()
{
    int n;
    cin >>n;
    vector<int>v(n);
    for(int i=0; i<n; i++)
    {
        cin >>v[i];
    }

    sort(v.begin(),v.end());// its means small to capital element

    for(int i=0; i<n; i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;

    sort(v.rbegin(),v.rend()); // its means capital to small element


    for(int i=0; i<n; i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
}
int main()
{
    int t=1;
    //cin >>t;
    while(t--)
    {
        sorting();
    }
}
