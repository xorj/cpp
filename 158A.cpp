#include <iostream>

using namespace std;

int main() {
   int n, m;
   cin >> n >> m;
   int T = 0;
   int a[n];

   for(int i = 0; i < n; i++) {
    cin >> a[i];
   }

   for(int i = 0; i < n; i++ ){
    if(a[i] > 0 && a[i] >= a[m - 1]){
        T++;
    }
   }
   cout << T;

return 0;
}
