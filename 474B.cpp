#include <iostream>
#include <algorithm>

using namespace std;

int main() {
int n;
cin >> n;
int a[n];

for(int i = 0; i < n; i++){
    int c;
    cin >> c;
    if(i == 0){
        a[i] = c;
    } else {
    a[i] = a[i-1] + c;
    }
}

int m;
cin >> m;

for(int i = 0; i < m; i++){
        int w;
cin >> w;
    auto *p = lower_bound(a, a+n,w);

    cout << p - a + 1 << endl;

}

return 0;
}
