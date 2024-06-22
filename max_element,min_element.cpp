
#include<bits/stdc++.h>
using namespace std;
void reverseit()
{
    int n,max,min;
    cin >>n;
    vector<int>v(n);
    for(int i=0; i<n; i++)
    {
        cin >>v[i];
    }
    int maxresult=*max_element(v.begin(),v.end());
    int minresult=*min_element(v.begin(),v.end());
    cout<<maxresult<<" "<<minresult<<endl;

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

