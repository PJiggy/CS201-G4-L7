#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;

int main() {
    int years, months, weeks;
    cout << "Enter number of years: ";
    cin >> years;
    cout << "Enter number of months per year: ";
    cin >> months;
    cout << "Enter number of weeks per month: ";
    cin >> weeks;

    vector<vector<vector<double>>> rainfall(years, vector<vector<double>>(months, vector<double>(weeks)));

    // Input rainfall data
    for (int y = 0; y < years; ++y) {
        for (int m = 0; m < months; ++m) {
            cout << "Enter rainfall (mm) for Year " << y + 1
                 << ", Month " << m + 1 << " (" << weeks << " weekly values): ";
            for (int w = 0; w < weeks; ++w) {
                cin >> rainfall[y][m][w];
            }
        }
    }

    cout << fixed << setprecision(2);
    // Calculate averages
    for (int y = 0; y < years; ++y) {
        cout << "Year " << y + 1 << " average rainfall per month:\n";
        for (int m = 0; m < months; ++m) {
            double sum = 0;
            for (double r : rainfall[y][m]) sum += r;
            cout << "\tMonth " << m + 1 << ": " << sum / weeks << " mm\n";
        }
    }

    return 0;
}
