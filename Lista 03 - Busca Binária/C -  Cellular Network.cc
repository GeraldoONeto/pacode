#include <bits/stdc++.h>

using namespace std;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m; cin>>n>>m;
    vector<int> cities(n), towers(m);

    for(int i=0; i<n; i++){
        cin>>cities[i];
    }

    for(int i=0; i<m; i++){
        cin>>towers[i];
    }

    for (int c : cities){

        auto a = lower_bound(towers.begin(), towers.end(), c);

    }

    return 0;
}