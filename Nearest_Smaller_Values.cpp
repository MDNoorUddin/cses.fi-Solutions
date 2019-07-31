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
#define vi vector<ll>
#define vp vector<pair<int, int>>
#define graph vector< vector<int> >
#define vs vector<string>
/**  '' "\n" ^ **/


typedef tree<int, null_type, less<int>, rb_tree_tag,
             tree_order_statistics_node_update>
    new_data_set;

int main() {

  //ios::sync_with_stdio(false);
  //cin.tie(0);
  int n;
  sf(n);
  stack<int> q;
  int x;
  vector<int> a(n);
  in(i,n)
  {
      sf(a[i]);
  }
  in(i,n)
  {
      x=a[i];
      while(true)
      {
          if(q.empty())
          {
              cout<<0;ps();
              q.push(i);
              break;
          }
          if(a[q.top()]<x)
          {
              cout<<q.top()+1;ps();
              q.push(i);
              break;
          }
          else
          {
              q.pop();
          }
      }
  }
}
