#include<iostream>
#include <string>
using namespace std;

int main(){
    int x = 0;
    int n;
    cout << "";
    cin >> n;
    
    for (int i=0;i<n;i++){
        string j;
        cout << "";
        cin >> j;
        if (j=="++X" or j=="++x" or j=="X++" or j=="x++"){
            x++;
        } else if (j=="--X" or j=="--x" or =="X--" or j=="x--"){
            x--;
        }
    }

    cout << x;

    return 0;
}