#include <iostream>

using namespace std;

int main() {
string s;
cin >> s;
int counter = 1;

for(int i = 1; i < s.length(); i++){
    for(int j = i - 1; j >= 0; j -- ){
        if(s[j] == s[i]){
            break;
        } else if( j == 0){
        counter++;
        }

    }
}
if(counter % 2 == 0) {
    cout << "CHAT WITH HER!" << endl;
} else {
cout << "IGNORE HIM!" << endl;

}

return 0;
}
