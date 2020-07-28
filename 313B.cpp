#include <iostream>

using namespace std;

int main() {
int  k = 0;
string s;
cin >> s;
int a[s.length()];
a[0] = 0;
for(long i = 1; i < s.length(); i++){
    if(s[i] ==  s[i-1]){
        k++;
    }
    a[i] = k;
}

int n;
cin >> n;
for(int i = 0; i < n; i++){
    int l, r;

    cin >> l >> r;
    cout << a[r-1] - a[l-1] << endl;

}
return 0;
}
