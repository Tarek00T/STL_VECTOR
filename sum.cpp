#include<bits/stdc++.h>
using namespace std;
void sum()
{
    int n,sum=0;
    cin >>n;
    vector<int>v(n);
    for(int i=0; i<n; i++)
    {
        cin >>v[i];
        sum+=v[i];
    }

    int average=sum/n;
    cout<<sum<<" "<<average<<endl;

}
int main()
{
    int t=1;
    //cin >>t;
    while(t--)
    {
        sum();
    }
}
