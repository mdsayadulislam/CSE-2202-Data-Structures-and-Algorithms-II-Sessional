#include <iostream>
#include <string>
using namespace std;

int main() {
    int k;
    string S;
    cin >> k >> S;

    string result = "";

    for(char level = '1'; level <= '9'; level++) {
        for(char c : S) {
            if(c == level && k > 0) {
                k--; // punish this officer
            } else {
                result += c; // keep officer
            }
        }
        S = result; // update S for next level
        result = ""; // reset result for next iteration
        if(k == 0) break; // punishment done
    }

    // append remaining string if k still > 0
    for(char c : S) {
        result += c;
    }

    cout << result << endl;

    return 0;
}
