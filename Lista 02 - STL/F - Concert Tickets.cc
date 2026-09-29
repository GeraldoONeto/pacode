#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){

    int n, m, x;
    vector<int> h, t;
    bool achou = false;

    cin>>n;
    cin>>m;

    for(int i=0; i<n; i++){
        cin>>x;
        h.push_back(x);
    }

    sort(h.begin(), h.end());

    for(int i=0; i<m; i++){
        cin>>x;
        for (int j=0; j<n; j++){
            if (x >= h[j]){
                cout<<h[j]<<endl;
                h.erase(h.begin() + j);
                achou = true;
                break;
            }
        }
        if (achou == false){
            cout<<"-1"<<endl;
        }
        achou = false;
    }

    return 0;
}