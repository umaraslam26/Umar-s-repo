#include<iostream>

using namespace std;

int main(){
    int n=0;
    int arr[5][5];
    for (int i=0;i<5;i++){
        for (int j=0;j<5;j++){
            cin >> arr[i][j];
        }
    }

    int r, c;
    int target = 1;
    for (int x=0;x<5;x++){
        for (int y=0;y<5;y++){
            if (arr[x][y]==1){
                r=x;
                c=y;
            }
        }
    }

    if (r>2){
        while(r!=2){
            swap(arr[r][c], arr[r-1][c]);
            r--;
            n++;
        }
    }

    if (r<2){
        while (r!=2){
            swap(arr[r][c], arr[r+1][c]);
            r++;
            n++;
        }
    }

    if (c>2){
        while(c!=2){
            swap(arr[r][c], arr[r][c-1]);
            c--;
            n++;
        }
    }

    if (c<2){
        while (c!=2){
            swap(arr[r][c], arr[r][c+1]);
            c++;
            n++;
        }
    }

    if (c==2 and r==2){
        cout << n;
    }
    
    cout << n;
    return 0;
}