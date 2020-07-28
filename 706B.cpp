#include <iostream>
#include <algorithm>

using namespace std;

int main() {

int  n;
cin >> n;
int a[n];
for(int i = 0; i < n; i++){
    cin >> a[i];
}

sort(a, a+n);

int m;
cin >> m;
int c[m];
for(int i = 0; i < m; i++){
    cin >> c[i];
}

for(int i = 0; i < m; i++){
    int* p = upper_bound(a, a+n, c[i]);
    if(p == a + n){
        cout << n << endl;
    } else {
        cout << p - a << endl;
    }

}


return 0;
}
