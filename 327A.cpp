#include <iostream>

using namespace std;

int main() {

int n, C = -1;
cin >> n;
int a[n];
for(int i = 0; i < n; i++){
    cin >> a[i];
}

for(int i = 0; i < n; i++){
    int c = 0;
    for(int j = i; j < n; j++){
       if(a[j] == 0){
        c++;
       }  else {
       c--;
       }
       C = max(c, C);
    }
}
for(int i = 0; i < n; i++){
    if(a[i]== 1){
        C++;
    }
}

cout << C;




return 0;
}
