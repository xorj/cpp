#include <iostream>
using namespace std;

int main(){
int n, k;
cin >> n >> k;
int a[n];
for(int i = 0; i < n; i++){
cin >> a[i];
}
long long s[n];
s[0] = a[0];
for(int j = 1; j < n; j++){
     s[j] = s[j-1] + a[j];
}
int index = 0;
long long minSum = s[k-1] - s[0] + a[0];
for(int i = 1; i+k <= n; i++){
     long long sum = s[i + k -1] - s[i] + a[i];
     if(sum < minSum){
        index = i;
        minSum = sum;
     }
}
cout << index + 1 << endl;
return 0;
}
