#include <iostream>
#include <stack>
#include <string>

using namespace std;

int main(){

    string opcao = "abc";
    stack<int> pilha;
    int x;

    while (opcao != "exit"){

        cin>>opcao;

        if (opcao == "push"){
            cin>>x; 
            pilha.push(x);
            cout<<"ok"<<endl;
        }
        else if(opcao == "pop"){
            x = pilha.top();
            pilha.pop();
            cout<<x<<endl;
        }
        else if(opcao == "back"){
            x = pilha.top();
            cout<<x<<endl;
        }
        else if(opcao == "size"){
            cout<<pilha.size()<<endl;
        }
        else if(opcao == "clear"){
            while(!pilha.empty()){
                pilha.pop();
            }
            cout<<"ok"<<endl;
        }
        else if(opcao == "exit"){
            cout<<"bye"<<endl;
        }

    }

    return 0;
}