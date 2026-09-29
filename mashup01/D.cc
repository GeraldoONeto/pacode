#include <iostream>


int main(){
    long long n;
    std::cin>>n;

    long long array[n];

    for (long long i=0; i<n; i++){
        std::cin>>array[i]; 
    }

    long long diff = 0;
    long long total = 0;

    for (long long i=0; i<n-1; i++){
        if (array[i] > array[i+1]){
            diff = array[i] - array[i+1];
            array[i+1] = array[i];
            total += diff;
        }
    }


    std::cout<<total;

}