#include <iostream>
using namespace std;

int main(){
    int n, s, i, j;
    cout<<" Masukkan Jumlah Baris = ";
    cin>>n;
    for (i = 1; i <= s; i++){
        for (s = i; s < n; s++)
        cout<<" ";
        for (j = 1; j <= i; j++)
        cout<< "*";
        cout<<"\n";
    }
    
    return 0;
}