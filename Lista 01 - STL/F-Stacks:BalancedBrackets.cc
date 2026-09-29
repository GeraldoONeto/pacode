#include <iostream>
#include <stack>
#include <string>
#include <set>

using namespace std;

string balanceamento(string seq){
    
    set<char> abertura = {'(', '{', '['};
    set<char> fechamento = {')', '}', ']'};
    
    stack<char> pilha;

    string c;

    for (int i=0; i<seq.size(); i++){
        if(abertura.count(seq[i] == 1)){
            pilha.push(seq[i]);
        }
        else{
            c = pilha.top();
            pilha.pop();

            if(seq == ")" && c != "(" || seq == "}" && c != "{" || seq == "]" && c != "["){
                return "NO";                
            }

        }

    }

    return "YES";

}

int main(){

    int n;
    cin>>n;
    set<string> s;
    string x;
    for (int i=0; i<n; i++){
        cin>>x;
        s.insert(x);

    }

    for (string y : s){
        x = balanceamento(y);
        cout<<x;
    }
    

    return 0;
}