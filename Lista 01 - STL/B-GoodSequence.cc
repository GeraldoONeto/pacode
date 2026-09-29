#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){

    int n, x;
    cin>>n;

    vector<int> a;

    for (int i=0; i<n; i++){
        cin>>x;
        a.push_back(x);
    }

    sort(a.begin(), a.end());

    int sum=0,atual=a[0],rem=0;

    for (int i=0; i<n; i++){
        if (a[i] != atual){
            if (sum < atual){
            rem += sum;
                }
            else if (sum > atual){
                rem += sum - atual; 
                }
            
            atual = a[i];
            sum = 1;
            }
        
        else{
            sum++;
        
        }
        
    }

    if (sum < atual){
        rem += sum;
    }
    else if (sum > atual){
        rem += sum - atual; 
    }   

    cout<<rem;

    return 0;
}