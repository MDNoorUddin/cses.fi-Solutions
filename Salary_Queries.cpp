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
  int n,q;
  sf(n);sf(q);
  vi a(n+1);
  new_data_set s;
  in(i,n)
  {
      cin>>a[i+1];
      s.insert(a[i+1]);
  }
  string str;
  int x,y;
  in(i,q)
  {
      sf(str);sf(x);sf(y);
      if(str=="?")
      {
          int Y=y;
          int X=x;
          x=s.order_of_key(x);
          y=s.order_of_key(y+1);
          //cout<<x;ps();cout<<y<<endl;
          if(x>=s.size())
          {
              cout<<0<<endl;
              continue;
          }
          if(*s.find_by_order(x)>Y)
          {
              cout<<0<<endl;
              continue;
          }
          y--;
          cout<<y-x+1<<endl;
      }
      else
      {
          int r=a[x];

          a[x]=y;
          int id=s.order_of_key(r);
          s.erase(s.find_by_order(id));
          s.insert(y);
      }
  }
}
