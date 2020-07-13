#include <iostream>

using namespace std;

int main() {

   int n, S = 0;
   string op;
   cin >> n;
   for(int i = 0; i < n; i++){
cin >> op;
    if(op[0] == '-' || op[op.length() - 1] == '-'){
        S--;
    } else {
        S++;
    }
   }

   cout << S << endl;


return 0;
}
