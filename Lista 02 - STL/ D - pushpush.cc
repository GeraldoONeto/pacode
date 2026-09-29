#include <iostream>
#include <queue>

using namespace std;

int main(){

    int n, x;
    deque<int> a;
    bool inv = false;

    cin>>n;

    for(int i=0; i<n; i++){
        cin>>x;

        if(inv == false){
            a.push_back(x);
            inv = true;
        }
        else if(inv == true){
            a.push_front(x);
            inv = false;
        }
    }

    if(inv == false){
        for(int num : a){
            cout<<num<<endl;
        }   
    }
    else if(inv == true){
        for (int i=a.size()-1; i>=0; i--){
            cout<<a.at(i)<<endl;
        }
    }

    return 0;
}