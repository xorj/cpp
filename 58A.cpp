#include <iostream>

using namespace std;

int main() {

string s;
cin >> s;
string r = "NO";
int p[5] = {-1, -1, -1, -1, -1};

//Finding the H
for(int i = 0; i < s.length(); i++){
    if(s[i] == 'h'){
       p[0] = i;

       break;
    }
}
if(p[0] == -1){
    cout << r;
   return 0;
}
//Finding the E
for(int i = p[0]; i < s.length(); i++){
    if(s[i] == 'e'){
        p[1] = i;

        break;
    }
}
if(p[1] == -1){
    cout <<r;
    return 0;
}
//Finding the first L
for(int i = p[1]; i < s.length(); i++){
    if(s[i] == 'l'){
        p[2] = i;

        break;
    }
}
if(p[2] == -1){
    cout <<r;
   return 0;
}
//Finding the second L
for(int i = p[2]; i < s.length(); i++){
    if(s[i] == 'l' && i != p[2]){
        p[3] = i;
        break;
    }
}
if(p[3] == -1){
    cout <<r;
   return 0;
}
//Finding the O
for(int i = p[3]; i < s.length(); i++){
    if(s[i] == 'o'){
        p[4] = i;

        break;
    }
}
if(p[4] == -1){
    cout <<r;
    return 0;
} else {
r = "YES";
}
        cout << r;


return 0;

}
