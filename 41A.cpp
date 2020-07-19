#include <iostream>

using namespace std;

int main(){
string s, t;
cin >> s;
cin >> t;
string r = "YES";
for(int i = 0; i < s.length(); i++){
    if(s[i] != t[s.length() - i - 1]){
        r = "NO";
        break;
    }
}
cout << r;
return 0;
}
