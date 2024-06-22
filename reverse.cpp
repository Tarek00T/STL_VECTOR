
#include<bits/stdc++.h>
using namespace std;
void reverseit()
{
    int n;
    cin >>n;
    vector<int>v(n);
    for(int i=0; i<n; i++)
    {
        cin >>v[i];
    }
    reverse(v.begin(),v.end());

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
        reverseit();
    }
}
