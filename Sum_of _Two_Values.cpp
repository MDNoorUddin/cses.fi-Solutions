#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

#define pf(n) cout << n << endl
#define ps() cout <<" ";
#define sf(n) cin >> n
#define in(i,n) for (int i = 0; i < n; i++)
#define vi vector<int>
#define vp vector<pair<int, int>>
#define graph vector< vector<int> >
#define vs vector<string>
/**  '' "\n" ^ **/

int main() {

  ios::sync_with_stdio(false);
  cin.tie(0);
  int n,x;
  cin>>n>>x;
  vector<int> a(n);
  map<int,vector<int> > mp;
  for(int i=0;i<n;i++)
  {
      cin>>a[i];
      mp[a[i]].push_back(i);
  }
  map<int,vector<int> >::iterator it;
  for(int i=0;i<n;i++)
  {
      it=mp.find(x-a[i]);
      if(it!=mp.end())
      {
          if(it->first==a[i])
          {
              if(it->second.size()==1)
              continue;
              else {
                cout<<it->second[0]+1;ps();cout<<it->second[1]+1<<endl;
                return 0;
              }
          }
          else
          {
              cout<<i+1;ps();cout<<it->second[0]+1<<endl;
              return 0;
          }
      }
  }
  cout<<"IMPOSSIBLE\n";
}
