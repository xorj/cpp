#include <iostream>
typedef long long LL;
using namespace std;

int main() {

    LL n;
    cin >> n;
    LL a[n-1];
    LL t;
    cin >> t;
    for(LL i = 0; i < n-1; i++){
        cin >> a[i];
    }
    string r = "NO";
    LL i = 1;
    while(i <= n){

        if(i == t){
            r = "YES";
            break;
        }
        if(i > t){
            break;
        }
       i = a[i-1] + i;
    }

    cout << r << endl;

return 0;
}
