#include <iostream>

using namespace std;

int main() {

int n;
cin >> n;
for(int i = 0; i < n; i++){
    int m;
    cin >> m;
    int a[m];
    for(int j =0; j < m; j++){
        cin >> a[j];
    }
    int Ms;
    long long S = 0;
    for(int j = 0; j < m; j++){
            if(j == 0){
                Ms = a[0];
            }
        if((Ms > 0 && a[j] > 0)|| (Ms < 0 && a[j] < 0)){
           Ms = max(Ms, a[j]);
        }else {
            S += Ms;
            Ms = a[j];
        }
        if(j == m -1){
            S += Ms;
        }

    }
    cout << S << endl;



}

return 0;
}
