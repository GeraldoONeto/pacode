#include <iostream>
#include <vector>
#include <algorithm>

int main(){
    long long n;
    std::cin >> n;

    std::vector<int> list;
    for (int i = 1; i < n; i++){
        int x;
        std::cin >> x;
        list.push_back(x);
    }

    std::sort(list.begin(), list.end());
    int resposta = n;

    for (int i = 1; i < n; i++){
        if ((list[i-1] == i) == 0){
            resposta = i;
            break;
        }
    }
    
    std::cout<<resposta;

}

