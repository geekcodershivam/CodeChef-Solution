#include<bits/stdc++.h>	
using namespace std; 	
#define mod 1000000007	
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);	
#define endl "\n" 	
typedef long long int ll;	

void printBoard(ll r, ll c){	
    ll row = 2, col = 2;	
    ll count = 0;	
    while(row != 2 || col != 8){	
        cout << row << " " << col << endl;	
        if(count % 2 == 0){	
            row = row - 1;	
        }	
        else{	
            row = row + 1;	
        }	
        col++;	
        count++;	
    }	
    cout << row << " " << col << endl;	
    cout << row + 1 << " " << col - 1  << endl; row++; col--;	
    cout << row + 1 << " " << col + 1 << endl; count = 0;	
    while(row != 3 || col != 1){	
        cout << row << " " << col << endl;	
        if(count % 2 == 0){	
            row = row + 1;	
        }	
        else{	
            row = row - 1;	
        }	
        col--;	
        count++;	
    }	
    cout << row << " " << col << endl;	
    cout << row + 1 << " " << col + 1 << endl; row++; col++;	
    cout << row + 1 << " " << col - 1 << endl; row = row + 2; count = 0;	
    while(row != 6 || col != 8){	
        cout << row << " " << col << endl;	
        if(count % 2 == 0){	
            row = row - 1;	
        }	
        else{	
            row = row + 1;	
        }	
        col++;	
        count++;	
    }	
    cout << row << " " << col << endl;	
    cout << row + 1 << " " << col - 1 << endl; row++; col--;	
    cout << row + 1 << " " << col + 1 << endl; count = 0;	
    while(row != 7 || col != 1){	
        cout << row << " " << col << endl;	
        if(count % 2 == 0){	
            row = row + 1;	
        }	
        else{	
            row = row - 1;	
        }	
        col--;	
        count++;	
    }	
    cout << row << " " << col << endl;	
}	

int main()	
{	
    fast;	
    ll t;	
    cin >> t;	
    while(t--){	
        ll r, c;	
        cin >> r >> c;	
        ll ans = 34;	
        if(r != 1 || c != 1){	
            if(r != c){	
                cout << ans + 2 << endl;	
                cout << (r + c) / 2 << " " << (r + c) / 2 << endl;	
                cout << 1 << " " << 1 << endl;	
                printBoard(1, 1);	
            }	
            else{	
                cout << ans + 1 << endl;	
                cout << 1 << " " << 1 << endl;	
                printBoard(1, 1);	
            }	
        }	
        else{	
            cout << ans << endl;	
            printBoard(1, 1);	
        }	
    }	

    return 0;	
} 