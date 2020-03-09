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
        ll n, q;	
        cin >> n >> q;	
        long long arr[n + 1];	
        for(ll i = 0; i < n; i++){	
            cin >> arr[i];	
        }	
        ll eOCount = 0, eECount = 0, oOCount = 0, oECount = 0;	
        for(ll i = 0; i < n; i++){	
            if(__builtin_popcount(arr[i] ^ 2) % 2 == 0){	
                oECount++;	
            }	
            else{	
                oOCount++;	
            }	
        }	
        for(ll i = 0; i < n; i++){	
            if(__builtin_popcount(arr[i] ^ 3) % 2 == 0){	
                eECount++;	
            }	
            else{	
                eOCount++;	
            }	
        }	
        while(q--){	
            ll p;	
            cin >> p;	
            if(__builtin_popcount(p) % 2 == 0){	
                cout << eECount << " " << eOCount << endl;	
            }	
            else{	
                cout << oECount << " " << oOCount << endl;	
            }	
        }	
    }	

    return 0;	
} 