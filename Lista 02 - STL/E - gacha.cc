#include <iostream>
#include <string>
#include <set>

using namespace std;

int main(){

    int n;
    set<string> S;
    string t;

    cin>>n;

    for(int i=0; i<n; i++){
        cin>>t;
        S.insert(t);
    }

    cout<<S.size();


    return 0;
}