#include <iostream>

using namespace std;

int main() {
int n;
cin >> n;
char a[n];

int counter = 1, m = 0;
cin >> a[0];
for(int i = 1; i < n ; i ++){
    cin >> a[i];
    if(a[i] == a[i-1]){
        counter++;
    }
    if(counter > 1){
        m = m + counter -1;
        counter = 1;
    }

}

cout << m;

return 0;
}
