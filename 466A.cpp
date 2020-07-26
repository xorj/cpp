#include <iostream>

using namespace std;

int main() {

int n, m, a, b;
cin >> n >> m >> a >> b;

if(b/m*1.0 < a){
    cout << min((n/m)*b + (n%m)*a, (n/m)*b + b);
} else {
    cout << n*a;
}

return 0;
}
