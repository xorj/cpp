#include <iostream>
#include <algorithm>

using namespace std;

int main(){

int S = 0, pS = 0;
int n, nc;
cin >> n;
int c[n];
for(int i = 0 ; i < n; i++){
    cin >> c[i];
    S = S + c[i];
}

sort(c, c + n);

for(int i = n - 1;  i >= 0 ; i = i - 1){
    pS = c[i] + pS;
    if(pS > S - pS){
        nc = n - i;
        break;
    }
}

cout << nc;


return 0;
}
