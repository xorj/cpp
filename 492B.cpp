#include <iostream>
#include <bits/stdc++.h>

using namespace std;
int main() {

int n, l;
float m = 0;

cin >> n >> l;

int a[n];

for(int i = 0; i < n; i++){
    cin >> a[i];

}

int s = sizeof(a) / sizeof(a[0]);
sort(a, a+s);

m = max((float)a[0] - 0, (float) l - a[n-1]);
for(int i = 1; i < n; i++){
   m = max((float)(a[i] - a[i-1])/2, m);
}

printf("%.10f", m);

return 0;
}
