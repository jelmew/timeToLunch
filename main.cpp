#include <iostream>

using namespace std;

int main() {
    time_t now = time(0);
    tm *ltm = localtime(&now);
    int seconds = 60 - ltm->tm_sec;
    int minutes = 60 - 1 - ltm->tm_min;
    int hours = 12 - 1 - ltm->tm_hour;
    if (hours < 0) {
        cout << "We are already past lunchtime lazy fucker" << endl;
        return 0;
    }
    cout << hours << " :hours, " << minutes << " :minutes, " << seconds << " : seconds to lunch" << endl;
    return 0;
}

