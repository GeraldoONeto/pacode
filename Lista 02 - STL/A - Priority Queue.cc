#include <iostream>
#include <queue>
#include <string>

using namespace std;

int main(){

    int k;
    priority_queue<int> s;
    string opcao;
    
    while(opcao != "end"){
        cin>>opcao;

        if (opcao == "insert"){
            cin>>k;
            s.push(k);
        }
        else if(opcao == "extract"){
            cout<<s.top()<<endl;
            s.pop();
        }
    }


    return 0;
}