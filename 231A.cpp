#include <iostream>

using namespace std;

int main() {
    int n;
    int p, v, t;
    int S = 0;
    cin >> n;
    for(int i = 0; i < n; i++ ){
            cin >> p >> v >> t;
        if( (p + v + t) >= 2) {
            S++;
        }
    }

    cout << S << endl;
return 0;
}
