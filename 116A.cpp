#include <iostream>

using namespace std;

int main() {

int n;
int S = 0, M = 0;
int a, b;

cin >> n;

for(int i = 0; i < n ; i++){
    cin >> a >> b;
    S = S + b - a;
    if(S > M) {
        M = S;
    }
}

cout << M;


return 0;
}
