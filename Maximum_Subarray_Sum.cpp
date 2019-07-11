#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

#define pf(n) cout << n << endl
#define ps() cout <<" ";
#define sf(n) cin >> n
#define in(i,n) for (int i = 0; i < n; i++)
#define vi vector<ll>
#define vp vector<pair<int, int>>
#define graph vector< vector<int> >
#define vs vector<string>
#define INF 9999999
#define pi pair<int,int>

vector<pair<int,int> > tree(10000001);

vector<int> a(100001);

int l,r;
int count=0;
void createSegmentTree(int root,int start,int End)
{
    if(start == End)
    {
        tree[root].first = a[start];
        tree[root].second=0;
        return;
    }
    int mid = (start + End) / 2;

    createSegmentTree(2*root, start, mid);
    createSegmentTree(2*root+1, mid+1, End);

    tree[root].first = (tree[2*root].first+ tree[2*root + 1].first);
    tree[root].second = (tree[2*root].second+ tree[2*root + 1].second);
    if(tree[root].first>=10)tree[root].second++;
    tree[root].first%=10;
    return;
}

pi Query(int root,int start,int End)
{
    if(start>r || End<l)return {0,0};
    if(start>=l&&End<=r)
    {
        return tree[root];
    }
    int mid=(start+End)/2;
    pi x=Query(root*2,start,mid);
    pi z=Query(root*2+1,mid+1,End);
    if(x.first+z.first>=10)x.second++;
    x.first=(x.first+z.first)%10;
    x.second+=z.second;
    return x;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n;
    sf(n);
    vector<int> a(n);
    in(i,n)
    {
        sf(a[i]);
    }
    ll sum=a[0];
    ll mx=a[0];
    for(int i=1;i<n;i++)
    {
        if(sum+a[i]>a[i])
        {
            sum+=a[i];
        }
        else
        {
            sum=a[i];
        }
        mx=max(sum,mx);
    }
    pf(mx);
}

