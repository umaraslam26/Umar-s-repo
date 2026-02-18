#include<iostream>
#include<string>
#include<vector>
#include<cctype>

using namespace std;

int main(){
    string n;
    cin >> n;

    char arr[sizeof(n)]={};

    vector<char> arr2 = {};

    for (int i=0;i<n.length();i++){
    	arr[i] = tolower(n[i]);
        if (tolower(arr[i]) != 'a' and tolower(arr[i]) != 'e' and tolower(arr[i]) != 'i' and tolower(arr[i]) != 'o' and tolower(arr[i]) != 'u' and tolower(arr[i]) != 'y'){
            arr2.push_back(arr[i]);
        }
    }

    for(char letters : arr2){
        cout << "." << letters;
    }

    
	return 0;
}
