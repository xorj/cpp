#include <iostream>

using namespace std;

int main() {
int n;
cin >> n;

for(int i = 0; i < n; i++){
long long a, b;

cin >> a >> b;

if(a%2 != b%2 || b*b > a){
cout << "NO" << endl;
} else {
cout << "YES" << endl;
}

}

return 0;
}
