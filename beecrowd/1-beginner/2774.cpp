#include <bits/stdc++.h>

using namespace std;

int main() {
    int h, m, i;
    string measurement;
    double xi;
    double ans, sum, average;
    vector<double> x;
    bool isDecimal;

    cin >> h;
    while (cin >> m) {
        sum = 0;
        while (cin >> measurement) {
            isDecimal = measurement.find('.') != string::npos ? true : false;
            if (isDecimal) {
                xi = stod(measurement);
                x.push_back(xi);
                sum += xi;
            } else {
                h = stoi(measurement);
                break;
            }
        }

        ans = 0;
        average = sum / x.size();
        for (i=0; i < x.size(); i++) {
            ans += pow((x[i] - average), 2);
        }
        ans = sqrt(ans / (x.size() - 1));
        printf("%07.5f\n", ans);
        x.clear();
    }
    return 0;
}
