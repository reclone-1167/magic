#include<bits/stdc++.h>
using namespace std;


int main(){

    // Vector declaration
    vector<int>v;

    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);

    for(int i = 0; i < 4; i++){
        cout << v[i] << " ";
    }
    cout << endl;


    // size function

    cout << v.size() << endl;



    return 0;
}