#include <iostream>
#include <map>
#include <functional>
#include <vector>
using namespace std;

int main() {
 std::map<string, int> Map;


int n;
cin >> n;

for(int i = 0; i < n; i++){
string s;
cin >> s;
if(Map.find(s) == Map.end()){
    Map[s] = 0;
    cout << "OK" << endl;
} else {
    Map[s]++;
    cout << s << Map[s] << endl;
}

}

return 0;
}
