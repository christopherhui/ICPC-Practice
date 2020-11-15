#include <bits/stdc++.h>
using namespace std;

int main() {
    int N; cin >> N;
    vector<int> counter(2);
    vector<int> streak(2);
    vector<int> lead(2);
    string prevWinner;
    int currStreak = 0;
    while (N--) {
        string s; cin >> s;
        if (s == "Yraglac") {
            counter[0]++;
            if (prevWinner != s) {
                streak[1] = max(streak[1], currStreak);
                currStreak = 1;
            }
            else {
                currStreak++;
            }
        }
        else {
            counter[1]++;
            if (prevWinner != s) {
                streak[0] = max(streak[0], currStreak);
                currStreak = 1;
            }
            else {
                currStreak++;
            }
        }
        prevWinner = s;
        lead[0] = max(lead[0], counter[0] - counter[1]);
        lead[1] = max(lead[1], counter[1] - counter[0]);
    }
    if (prevWinner == "Yraglac") {
        streak[0] = max(streak[0], currStreak);
    }
    else {
        streak[1] = max(streak[1], currStreak);
    }
    if (streak[0] == streak[1] && lead[1] == lead[0]) {
        cout << "Agree" << endl;
    }
    else if (streak[0] >= streak[1] && lead[1] >= lead[0]) {
        cout << "Disagree" << endl;
    }
    else if (streak[1] >= streak[0] && lead[0] >= lead[1]) {
        cout << "Disagree" << endl;
    }
    else {
        cout << "Agree" << endl;
    }
}
