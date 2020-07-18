#include <iostream>

using namespace std;

int main() {
string s, r = "NO";
cin >> s;
for(int i = 0; i < s.length(); i ++){
    if(s[i] == 'H' ||s[i] == 'Q' || s[i] == '9'){
        r = "YES";
        break;
    }
}
cout << r;

return 0;
}
