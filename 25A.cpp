#include <iostream>

using namespace std;

int main() {
int n, e = 0, o = 0;
cin >> n;
int a[n], even[n], odd[n];

for(int i = 0; i < n; i++){
    cin >> a[i];
}

for(int i = 0; i < n; i++){
    if(a[i] % 2 == 0){
    even[e] = i + 1;
    e++;
    }else {
    odd[o] = i + 1;
    o++;
    }
}

if(e > o){
    cout << odd[0];
} else {
    cout << even[0];
}

return 0;
}
