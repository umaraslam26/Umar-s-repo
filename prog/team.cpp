#include <iostream>

using namespace std;
 
int main(){
    int n;
    cout << "";
    cin >> n;
    int yes = 0;
    int ver = 0;
    int arr[n][3];

    for (int i=0;i<n;i++){
        cin >> arr[i][0] >> arr[i][1] >> arr[i][2];
    }
    
    for (int j=0;j<n;j++){
        for (int k=0;k<3;k++){
            if (arr[j][k]==1){
                ver++;
            } 
        }
        if (ver>=2){
            yes++;
        }
        ver = 0;
    }

    cout << yes;
    return 0;
}