#include <iostream>
#include <bits/stdc++.h>


using namespace std;

int main() {
string s;
cin >> s;
int a[s.length()/2 + 1] = {};
int counter = 0;
for(int i = 0; i < s.length(); i = i+2){
    a[i/2] =  s[i] - '0';
}
sort(a, a+s.length()/2 + 1);
cout << a[0];
for(int i = 1; i < s.length()/2 + 1; i++){

        cout << "+"<< a[i] ;
        }


return 0;
}
