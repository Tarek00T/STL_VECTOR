
#include<bits/stdc++.h>
using namespace std;
void uniqueit()
{
    int n;
    cin >>n;
    vector<int>v(n);
    for(int i=0; i<n; i++)
    {
        cin >>v[i];
    }

    sort(v.begin(),v.end());//sort the element which is small to capital then resulting same element 2 or 3 times like 4 4 4 5 5  as this unique 4 5 thats set

    int sz= unique(v.begin(),v.end())-v.begin();

    for(int i=0; i<sz; i++)
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
        uniqueit();
    }
}
