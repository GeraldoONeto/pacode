#include <iostream>
#include <list>

int main() {

    long long n;
    std::cin>>n;

    std::list<int> lista; 
    for (long long i=0; i<n; i++){
        long long x;
        std::cin>>x;
        lista.push_back(x);
    }

    lista.sort();

}