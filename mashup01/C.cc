#include <iostream>
#include <string>

int main(){
    
    std::string cadeia;
    std::cin >> cadeia;

    long long n = cadeia.size();

    int seq = 1, seq_max = 1;

    for (int i = 0; i < n; i++){
        if (cadeia[i] == cadeia[i+1]){
            seq += 1;
        }
        else{
            seq = 1;
        }

        if (seq > seq_max){
            seq_max = seq;
        }


    }

    std::cout<<seq_max;
}