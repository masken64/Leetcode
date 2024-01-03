#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int smallestSubstring(string s) {
    int zero = -1, one = -1, two = -1;
    int ans = INT_MAX;
    for (int i = 0; i < s.length(); i++) {
        if (s.at(i) == '0') {
            zero = i;
        } else if (s.at(i) == '1') {
            one = i;
        } else {
            two = i;
        }

        if (zero != -1 && one != -1 && two != -1) {
            vector<int> indices = {zero, one, two};
            ans = min(ans, i + 1 - *min_element(indices.begin(), indices.end()));
        }
    }

    if (ans == INT_MAX) {
        return -1;
    }
    return ans;
}

int main() {
    string input = "0102";
    cout << smallestSubstring(input) << endl;
    return 0;
}
