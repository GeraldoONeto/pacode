#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, q, x; cin>>n, cin>>q;;

    vector<int> arr;
    for (int i=0; i<n; i++){
        cin>>x;
        arr.push_back(x);
    }

    for(int i=0; i<q; i++){

        int l=0, r=(arr.size() - 1), mid, ans=-1;
        cin>>x;

        while(l<=r){
            
            mid = (l + r) / 2;

            if(arr[mid] > x){
                r = mid-1;
            }
            else if(arr[mid] < x){
                l = mid+1;
            }
            else{
                ans = mid;
                r = mid-1;
            }
        }
        cout<<ans<<"\n";
            
    }

    return 0;
}