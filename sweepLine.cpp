#include <bits/stdc++.h>
#include <iostream>
#define endl '\n'
using namespace std;

int main(){
    int n; cin >> n;
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;

    int count = 0;
    int ans = 0;
    while(n--){
        int a,b; cin >> a >> b;
        pq.push(pair<int,int>(a,0));
        pq.push(pair<int,int>(b,1));
    }
    while (pq.size()){
        pair<int,int> pareja= pq.top();
        pq.pop();
        auto [f, s] = pareja;
        if(s == 0){
            count++;
            ans = max(ans, count);
        }else{
            count--;
        }
    }
    cout << ans << endl;
}
