#include <bits/stdc++.h>
#include <iostream>
#define endl '\n'
using namespace std;

int main(){
    int n; cin >> n;
    cout << "hola mundo" <<endl;
    n = stoi("1234");// cast string to integer
    
    
    vector<int> v; // Define vectors
  
    sort(v.begin(), v.end()); //Ascending
    sort(v.begin(), v.end(),  greater<int>()); // Descending order
     
    for(int a: v){
        cout<< a << endl; //loop through an array / vector
    }

    fstream MyReadFile("input.txt");
    while (getline (MyReadFile, myText)) {
        // Output the text from the file
        cout << myText << endl;
    }
    MyReadFile.close();
}
