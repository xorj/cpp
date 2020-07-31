#include <iostream>
#include <set>

using namespace std;




int main() {

int n, m;
cin >> n >> m;
int a[n];
for(int i = 0; i < n; i++){
   cin >> a[i];
}
    int r[n] = { };
    int c = 0;
std::set<int> d;

    for(int i = n-1; i >= 0; i--){
    if(d.find(a[i]) == d.end()){
        c++;
        d.insert(a[i]);
    }
    r[i] = c;
}

for(int i = 0; i < m ; i++){
        int l;
cin >> l;
cout << r[l-1] << endl;
}
return 0;

}
