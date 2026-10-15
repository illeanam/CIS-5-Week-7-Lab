// Illeana Martinez - Week 7 Lab

#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::endl;
using std::string;

int main() {
	
    const int N = 5;

    int quiz[N] = { 88, 92, 70, 95, 81 };
    int lab[N] = { 70, 85, 90, 75, 80 };

    int sum = 0;
    int hi = quiz[0];

    cout << "Quiz" << endl;

    for (int i = 0; i < N; ++i) {
        cout << "[" << i << "] " << quiz[i] << endl;
        sum += quiz[i];

        if (quiz[i] > hi) {
            hi = quiz[i];
        }
    }

    cout << "Sum: " << sum << endl;
    cout << "High: " << hi << endl;

    sum = 0;
    hi = lab[0];

    cout << "Lab" << endl;

    for (int i = 0; i < N; ++i) {
        cout << "[" << i << "] " << lab[i] << endl;
        sum += lab[i];

        if (lab[i] > hi) {
            hi = lab[i];
        }
    }

    cout << "Sum: " << sum << endl;
    cout << "High: " << hi << endl;

    return 0;
}