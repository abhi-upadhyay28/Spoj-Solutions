#include <iostream>
#include <string>
#include<cmath>              // perhaps just because string type c is giving right answer otherwise giving wrong answer!!!!
using namespace std;
int main() {
    int T; cin >> T;
    while (T--) {
        long long a, b; string s; cin >> a >> b >> s;
        cout <<abs( a*a - 2*b)<< endl;
    }
}
