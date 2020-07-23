#include <iostream>
#include <cmath>

typedef long long LL;

using namespace std;

bool prime(LL n){
    LL a = sqrt(n);
    bool r = 1;
    for(LL i = 1; i <= a; i++){
        if(n%i == 0 && i != 1){
            r = 0;
            break;
        }
    }
    return r;

}

int main() {
    LL n;
    cin >> n;
    for(LL i = 0; i < n; i++){
        LL t;
        cin >> t;
        LL u = sqrt(t);
        if(!u*u == t || u == 1){
            cout << "NO" << endl;
        } else if (u*u == t && prime(u)){
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }

    }
return 0;


}
