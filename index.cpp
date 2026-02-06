#include<iostream>
#include<string>

using namespace std;

int main(void){
    int i;
    cout << "";
    cin >>i;
    string word;
    string words[i] = {};
    for (int n=0; n<i; n++){
        cout << "";
        cin >> word;
        words[n] = word;
    }
    
    int m = 0;

    while (m<i) {
        char word1[words[m].length()] = {};
        for (int z=0; z<words[m].length(); z++){
            string iterator = words[m];
            word1[z] = iterator[z];
        }

        if (sizeof(word1) <= 4){
            cout << word1 << endl;
        } else {
            cout << word1[0] << sizeof(word1)/sizeof(word1[0]) - 2 << word1[sizeof(word1)/sizeof(word1[0]) - 1] << endl;
        }
        word1[0];
        m++;
    }
    return 0;
}