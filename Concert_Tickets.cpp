#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp> // Common file
#include <ext/pb_ds/tree_policy.hpp>
#include <functional> // for less
#include <iostream>
using namespace __gnu_pbds;
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


typedef tree<int, null_type, less_equal<int>, rb_tree_tag,
             tree_order_statistics_node_update>
    new_data_set;


int main() {

  ios::sync_with_stdio(false);
  cin.tie(0);
  int n,m,l;
  sf(n);sf(m);
  new_data_set p;
  multiset<int> a;
  in(i,n)
  {
      cin>>l;
      a.insert(l);
  }
  int x;
  while(m--)
  {
      cin>>x;
      auto k=a.lower_bound(x);
      if(k==a.end())
      {
              if(k==a.begin()){
                cout<<-1<<endl;
              continue;
               }
              k--;
              if(*k>x)cout<<-1<<endl;
              else {
              cout<<*k<<endl;
              a.erase(k);
              }
      }
      else
      {
          if(x!=*k&&k==a.begin()&&x<*k)
          {
              cout<<-1<<endl;
              continue;
          }
          if(x!=*k&&x<*k)
            k--;
          cout<<*k<<endl;
          a.erase(k);
      }
  }
}
