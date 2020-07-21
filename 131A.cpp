#include <iostream>
#include <cstring>

using namespace std;

int main() {
string s;
cin >> s;
int c = true;
for(int i = 0; i < s.length(); i++){
    if( i != 0 && s[i] != toupper(s[i])){
        c = false;
        break;
    }

}

if(c){
    for(int i = 0; i < s.length(); i++){
    if(s[i] != toupper(s[i])){
       s[i] = toupper(s[i]);
    } else {
        s[i] = tolower(s[i]);
    }

}
}

cout << s;

return 0;
}
