#include <bits/stdc++.h>

using namespace std;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, q, a, b; cin>>n>>q;

    vector<int> array(n+1);
    vector<long long> somas(n+1);

    for(int i=1; i<n+1; i++){

        cin>>array[i];
        
        somas[i] = somas[i-1] + array[i];
    }

    for(int i=0; i<q; i++){

        cin>>a>>b;

        cout<<somas[b] - somas[a-1]<<"\n";
    }

    return 0;
}