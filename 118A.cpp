#include <cctype>
#include <iostream>
#include <cstring>
#include <cstdio>

using namespace std;

int main() {
 string s;
 cin >> s;
 for(int i = 0;  i < s.size(); i++){
    char c = s[i];
    c = tolower(c);
    if(c == 'a' || c == 'e' ||c == 'i' ||c == 'o' ||c == 'u' ||c == 'y') {
        continue;
    } else {
        cout << "." << c;
    }
 }


return 0;
}
