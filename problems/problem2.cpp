#include <iostream>
using namespace std;

class Timer {
private:
    int hours;
    int minutes;
    int seconds;

public:
    Timer(int h, int m, int s) {
        setTime(h, m, s);
    }

    void setTime(int h, int m, int s) {
        // Adjust seconds and minutes if they exceed their respective limits
        if (s >= 60) {
            m += s / 60;
            s %= 60;
        }
        if (m >= 60) {
            h += m / 60;
            m %= 60;
        }

        // Adjust hours if it exceeds its limit
        hours = h % 24;

        minutes = m;
        seconds = s;
    }

    void printTime() {
        cout << hours << ":" << minutes << ":" << seconds << endl;
    }
};

int main() {
    int h, m, s;
    cout << "Enter hours minutes seconds: ";
    cin >> h >> m >> s;

    Timer timer(h, m, s);
    cout << "Output: ";
    timer.printTime();

    return 0;
}
