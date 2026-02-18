#include<iostream>

using namespace std;

int main(){

    int n, k, l;
    do {
        cout << "";
        cin >> n >> k;
    } while (k>n or n>50 or k<1);
    
    int scores[n] = {};
    for (int i=0;i<n;i++){
        cin >> scores[i];
    } 
        
    
    int c=0;
    for (int j=0;j<n;j++){
        if (scores[j]>=scores[k-1]){
            c++;
        }
        if (scores[j]==0){
            c--;
        }
    }

    cout << c;
    return 0;
}