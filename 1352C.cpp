#include <iostream>

using namespace std;

int main() {
int n;
cin >> n;

for(int i = 0; i < n; i++){
    int n,k, b;
    cin >> n >> k;
    if(k > n){
    b = n*(k/(n-1)) - 1;
    if(k - (n-1)*(k/(n-1)) != 0 ){
        b += 1 + k - (n-1)*(k/(n-1));
    }
    } else if(n == k){
        b = k+1;
    } else {
        b = k;
    }
cout << b << endl;

    }
return 0;
}



