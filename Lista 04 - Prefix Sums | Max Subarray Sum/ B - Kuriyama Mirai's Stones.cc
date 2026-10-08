#include <bits/stdc++.h>

using namespace std;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n; cin>>n;
    vector<int> v(n+1);
    vector<long long>vs(n+1);

    for(int i=1; i<=n; i++){
        cin>>v[i];
        
        vs[i] = vs[i-1] + v[i]; 
    }

    vector<int> u = v;
    vector<long long> us(n+1);

    sort(u.begin(), u.end());

    for (int i=1; i<=n; i++){
        us[i] = us[i-1] + u[i];
    }

    int m, l, r, type; cin>>m;

    for(int i=0; i<m; i++){
    
        cin>>type>>l>>r;

        if(type == 1){

            cout<<vs[r] - vs[l-1]<<"\n";

        }
        else{
            cout<<us[r] - us[l-1]<<"\n";
        }

    }

    return 0;

}