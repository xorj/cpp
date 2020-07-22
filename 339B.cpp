#include <iostream>

using namespace std;

int main() {
int n, m, p = 1;
long long S = 0;

cin >> n >> m;

int a[m];

for(int i = 0; i < m; i++){
    cin >> a[i];
}

for(int i = 0; i < m; i++){
    if(a[i] >= p){
        S = S + (a[i] - p);
    } else {
        S = S + (n - p) + a[i];
    }

     p = a[i];
}

cout << S;
return 0;
}
