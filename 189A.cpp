#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int l, a, b, c;
    int M = 0;
    cin >> l >> a >> b >> c;

    for(int i = 0; i <= l; i += a){

        for(int j = 0; j <= (l - i); j += b){
            float z = (float)(l - i - j)/c;
            if(ceil(z) == floor(z)){
               int x = i / a;
               int y = j /b;
               M = max( M,  x + y + (int) z);

            }

        }
    }

    cout << M;

return 0;
}
