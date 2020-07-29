#include <iostream>
#include<bits/stdc++.h>

using namespace std;

int main() {
int n;
string r = "Poor Alex";
cin >> n;
vector <pair<int, int>> v;

for(int i = 0; i < n; i++){
        int a, b;
        cin >> a >> b;
    v.push_back(make_pair(a, b));
}

sort(v.begin(), v.end());

for(int i = 1; i < n; i++){
    if(v[i].second < v[i-1].second){
        r = "Happy Alex";
    }

}
cout << r << endl;

}
