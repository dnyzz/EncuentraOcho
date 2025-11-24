#include <iostream>
using namespace std;
int main() {
    int n, num;
    cin >> n;
    for (int i=0; i<n; i++) {
        cin>>num;
        if (num==8) {
            cout<<1<<endl;
            return 0;
        }
    }
    cout << 0 << endl;
    return 0;
}
