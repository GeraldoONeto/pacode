#include <bits/stdc++.h>

using namespace std;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, k; cin>>n>>k;
    vector<int> h(n+1);
    vector<long long>sum(n+1);

    for(int i=1; i<=n; i++){
        cin>>h[i];

        sum[i] = sum[i-1] + h[i];
    }

    int l=1, lsalvo=1;
    long long menor = 1e18;

    for(int r=k; r<=n; r++){
        if((sum[r]-sum[l-1]) < menor){
            menor = sum[r]-sum[l-1];
            lsalvo = l;
        }
        l++;
    }

    cout<<lsalvo;

    return 0;
}