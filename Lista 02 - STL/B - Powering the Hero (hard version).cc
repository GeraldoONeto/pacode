#include <iostream>
#include <queue>
#include <vector>

using namespace std;

int main(){

    int t, n, aux;
    int s;
    priority_queue<int> bonus;
    long long exercito=0;
 
    cin>>t;

    for (int i=0; i<t; i++){
        
        cin>>n;

        for (int j=0; j<n; j++){
            cin>>s;
            if (s != 0){
                bonus.push(s);
            }
            else{
                if (!bonus.empty()){
                    exercito+= bonus.top();
                    bonus.pop();
                }
            }
        }

        cout<<exercito<<endl;
        
        bonus = priority_queue<int>();
        exercito=0;

    }

    

    return 0;
}