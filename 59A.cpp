#include <iostream>
#include <cstring>

using namespace std;

int main() {
string s;
cin >> s;
int u = 0,l = 0;
for(int i = 0; i < s.length(); i++){
    if(s[i] == tolower(s[i])){
        l++;
    } else {
        u++;
    }

}
if(l >= u){
    for(int i = 0; i < s.length(); i++){
        putchar(tolower(s[i]));
    }
} else {
     for(int i = 0; i < s.length(); i++){
        putchar(toupper(s[i]));
    }
}
return 0;
}
