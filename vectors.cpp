#include<bits/stdc++.h>
using namespace std;


int main(){

    // Vector declaration
    vector<int>v;
    

    // Vector push back operations - 
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);


    for(int i = 0; i < 3; i++){
        cout << v[i] << " ";
    }
    cout << endl;


    // size function
    int sz = v.size();
    cout << v.size() << endl;

    return 0;
}