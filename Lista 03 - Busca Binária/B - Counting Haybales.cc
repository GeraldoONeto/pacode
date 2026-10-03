#include <bits/stdc++.h>

using namespace std;

int main(){
    freopen("haybales.in", "r", stdin);
    freopen("haybales.out", "w", stdout);

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, q, x; cin>>n>>q;
    vector<int> arr;

    for(int i=0; i<n; i++){
        cin>>x;
        arr.push_back(x);
    }

    sort(arr.begin(), arr.end());

    int a, b;

    for(int i=0; i<q; i++){

        cin>>a>>b;
    
        auto begin = lower_bound(arr.begin(), arr.end(), a);
        auto end = upper_bound(arr.begin(), arr.end(), b);

        int ans = end - begin;

        cout<<ans<<"\n";
    }

    return 0;
}