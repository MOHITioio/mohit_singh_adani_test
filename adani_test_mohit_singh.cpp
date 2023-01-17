#include<bits/stdc++.h>
using namespace std;
vector<vector<int> > createList(int r,int c)                    // for first question
{
    int i,j;
    vector<vector<int> > l(r,vector<int> (c,0));
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            l[i][j]=1+(rand()%100);
        }
    }
    return l;
}

vector<vector<int> > sortList(vector<vector<int> > &l)            // for second question
{
    int r,c,i,j;
    r=l.size();
    c=l[0].size();
    vector<int> temp(r,0);
    vector<vector<int> > res(r,vector<int> (c,0));
    for(i=0;i<c;i++)
    {
        for(j=0;j<r;j++)
        {
            temp[j]=l[j][i];
        }
        sort(temp.begin(),temp.end());
        for(j=0;j<r;j++)
        res[j][i]=temp[j];
    }
    return res;
}

int main()
{
    int i,j,r,c;
    cin>>r>>c;
    vector<vector<int> > l(r,vector<int> (c,0));
    l=createList(r,c);
    l=sortList(l);
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        cout<<l[i][j]<<" ";
        cout<<"\n";
    }
    return 0;
}