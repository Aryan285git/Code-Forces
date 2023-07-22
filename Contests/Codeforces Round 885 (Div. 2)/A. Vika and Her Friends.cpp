#include <iostream>
#include <cmath>

using namespace std;

bool escape(int n, int m, int k, int x, int y) {
    bool esc = true;

    for (int i = 0; i < k; i++) {
        int xi, yi;
        cin >> xi >> yi;
        int dx = abs(x - xi);
        int dy = abs(y - yi);
        if ((dx + dy) % 2 == 0 ) {
            esc = false;  
        }
    }
    return esc;
}

int main() {
    #ifndef ONLINE_JUDGE
    // for getting input from input.txt
    freopen("input.txt", "r", stdin);
    // for writing output to output.txt
    freopen("output.txt", "w", stdout);
    #endif
    int t;
    cin >> t;

    while(t--){
        int n, m, k;
        cin >> n >> m >> k;
        int x, y;
        cin >> x >> y;
        if (escape(n, m, k, x, y)) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}