#include <iostream>

using namespace std;

int main() {
int s, n;
string r = "YES";
cin >> s >> n;

int d[n][2];

for(int i = 0; i < n; i++){
    cin >> d[i][0] >> d[i][1];
}

for(int i = 0; i < n; i++){
    for(int j = 0; j < n; j++){
        if(d[j][0] < s && d[j][0] != 0){
            d[j][0] = 0;
            s = s + d[j][1];
            break;
        }
    }

}
for(int i = 0; i < n; i++){
    if(d[i][0] > 0) {
    r = "NO";
    break;
    }

}
 cout << r;

return 0;
}
