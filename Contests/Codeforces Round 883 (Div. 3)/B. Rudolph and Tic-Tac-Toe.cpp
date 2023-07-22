#include <iostream>
#include <vector>
#include <string>

using namespace std;

char Winner(const vector<string>& v) {
    for (int r = 0; r < 3; r++) {
        if (v[r][0] != '.' && v[r][0] == v[r][1] && v[r][1] == v[r][2]) {
            return v[r][0];
        }
    }
    for (int c = 0; c < 3; c++) {
        if (v[0][c] != '.' && v[0][c] == v[1][c] && v[1][c] == v[2][c]) {
            return v[0][c];
        }
    }
    if (v[0][0] != '.' && v[0][0] == v[1][1] && v[1][1] == v[2][2]) {
        return v[0][0];
    }
    if (v[0][2] != '.' && v[0][2] == v[1][1] && v[1][1] == v[2][0]) {
        return v[0][2];
    }
    return '\0';
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

    while (t--) {
        vector<string> v(3);
        for (int i = 0; i < 3; i++) {
            cin >> v[i];
        }

        char winner = Winner(v);

        if (winner != '\0') {
            cout << winner << endl;
        }
        else {
            cout << "DRAW" << endl;
        }
    }

    return 0;
}