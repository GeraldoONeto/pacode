#include <iostream>
#include <set>
#include <string>
#include <vector>

using namespace std;

int main(){

    int n;
    cin>>n;

    set<vector<string>> folhas;
    string esp, cor;

    for (int i=0; i<n; i++){
        vector<string> linha;
        cin>>esp;
        cin>>cor;

        linha.push_back(esp);
        linha.push_back(cor);
    
        folhas.insert(linha);
    }

    int count = folhas.size();

    cout<<count;

    return 0;
}