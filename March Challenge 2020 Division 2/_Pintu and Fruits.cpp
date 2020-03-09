#include<bits/stdc++.h>	
using namespace std; 	
#define mod 1000000007	
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);	
#define endl "\n" 	
typedef long long int ll;	

int main()	
{	
    fast;	
    ll t;	
    cin >> t;	
    while(t--){	
        ll n, m;	
        cin >> n >> m;	
        long long f[n + 1]; map<ll, ll> umap;	
        for(ll i = 0; i < n; i++){	
            cin >> f[i];	
        }	

        for(ll i = 0; i < n; i++){	
            ll k; cin >> k;	
            if(umap.find(f[i]) == umap.end()){	
                umap[f[i]] = k;	
            }	
            else{	
                umap[f[i]] += k;	
            }	
        }	

        ll mini = INT_MAX;	
        for(auto x = umap.begin(); x != umap.end(); x++){	
            mini = min(mini, x->second);	
        }	
        cout << mini << endl;	
    }	

    return 0;	
} 