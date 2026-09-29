#include <iostream>
#include <vector>
#include <algorithm>

int main(){

    int n, x;
    std::vector<int> v;

    std::cin>>n;

    for (int i=0; i < n; i++){
        std::cin>>x;
        v.push_back(x);
    }

    std::sort(v.begin(), v.end());

    for (int i; i < n; i++){
        std::cout<<v[i]<<" ";
    }

    return 0;
}