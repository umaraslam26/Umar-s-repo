#include<iostream>
#include<vector>
#include<numeric>
using namespace std;

int main(){
    int n;
    cin >> n;

    int arr[n][3];
    int a, b, c;

    for (int i=0;i<n;i++){
        do {
            cin >> arr[i][0] >> arr[i][1] >> arr[i][2];
        } while (arr[i][0]<-100 or arr[i][0]>100 or arr[i][1]<-100 or arr[i][1]>100 or arr[i][2]<-100 or arr[i][2]>100);

    }

    int yes=0;
    for (int i=0;i<n;i++){
        if (arr[0][i] + arr[1][i] + arr[2][i] == 0){
            yes++;
        }
    }

    if (yes==3){
        cout <<"YES";
    } else {
        cout << "NO";
    }
    return 0;
}