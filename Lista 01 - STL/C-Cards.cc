#include <iostream>
#include <string>

using namespace std;

int main(){

    int n;
    string a;

    cin>>n;
    cin>>a;

    int zcount=0, ncount=0;
    
    for (int i=0; i<n; i++){
        if (a[i] == 'z'){
            zcount++;
        }

        else if (a[i] == 'n'){
            ncount++;
        }
    }

    string result;

    for (int i=0; i<ncount; i++){
        result+='1';
        result+=' ';
    }

    for (int i=0; i<zcount; i++){
        result+='0';
        result+=' ';
    }

    cout<<result;

    return 0;
}