#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        double v, x;
        char colon;
        cin >> v >> colon >> x;

        // Calculate the time to collision
        double time_to_collision = x / v;

        // Check the criteria and output the corresponding instruction
        if (time_to_collision <= 1.0) {
            cout << "SWERVE" << endl;
        } else if (time_to_collision <= 5.0) {
            cout << "BRAKE" << endl;
        } else {
            cout << "SAFE" << endl;
        }
    }

    return 0;
}