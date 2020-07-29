#include <iostream>
#include <algorithm>
using namespace std;

int main() {

int n;
cin >> n;
for(int i = 0; i < n; i++){
    int m;
    cin >> m;
    int a[m];
    for(int j = 0; j < m; j++){
    cin >> a[j];
    }
    sort(a, a+m);
    int D = 1, C = 1,c = 1;
   for(int j = 1; j < m; j++){

        if(a[j] == a[j-1]){
            c++;
            C = max(c, C);
        } else  {
            c = 1;
            D++;
        }

   }
   if( D == C){
   cout << D-1 << endl;
   } else if(D > C){
   cout << C << endl;
   } else {
   cout << D << endl;
   }


}

return 0;
}
