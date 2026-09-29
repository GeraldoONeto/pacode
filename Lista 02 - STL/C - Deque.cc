#include <iostream>
#include <queue>

using namespace std;

int main(){

    deque<int> A;
    int q, aux, d, p;
    long long x;

    cin>>q;

    for(int i=0; i<q; i++){
        cin>>aux;

        if(aux == 0){
            cin>>x;
            cin>>d;
            if(x==0){
                A.push_front(d);
            }
            else if(x==1){
                A.push_back(d);
            }
        }

        if(aux==1){
            cin>>p;
            cout<<A.at(p)<<endl;
        }

        if(aux==2){
            cin>>d;
            if(d==0){
                A.pop_front();
            }
            else if(d==1){
                A.pop_back();
            }
        }
    }


    return 0;
}