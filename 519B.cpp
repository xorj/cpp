#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;

int main() {
int n;
cin >> n;
int a[n];
for(int i = 0; i < n; i++){
    cin >> a[i];
}

int b[n-1];
for(int i = 0; i < n-1; i++){
    cin >> b[i];
}

int c[n-2];
for(int i = 0; i < n-2; i++){
    cin >> c[i];
}
sort(a, a+n);
sort(b, b+n-1);
sort(c, c+n-2);

int j = 0;
int k = 0;
while(j < n){
    if(a[j] != b[k]){
        cout << a[j] << endl;
    j++;
    } else {
    j++;
    k++;
    }
}
j = 0;
k = 0;
while(j < n-1){
    if(b[j] != c[k]){
        cout << b[j] << endl;
    j++;
    } else {
    j++;
    k++;
    }
}

return  0;
}
