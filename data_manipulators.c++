#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int intValue = 123;
    double doubleValue = 456.789;

    // Using setw with width 0 for whitespace insertion
    cout << "Using endl:" << endl;
    cout << "Integer value: " << intValue << endl;
    cout << "Double value: " << doubleValue << endl;

    cout << "Using ends:" << ends;
    cout << "Integer value: " << intValue << ends;
    cout << "Double value: " << doubleValue << ends;

    cout << "Using setw:" << endl;
    cout << "Integer value: " << intValue << setw(0);
    cout << "Double value: " << doubleValue << setw(0);

    cout << "Using flush:" << flush;
    cout << "Integer value: " << intValue << flush;
    cout << "Double value: " << doubleValue << flush;

    cout << "Using setw:" << endl;
    cout << setw(15) << "Integer value: " << intValue << endl;
    cout << setw(15) << "Double value: " << doubleValue << endl;

    cout << "Using setfill:" << endl;
    cout << setw(20) << setfill('*') << "Integer value: " << intValue << endl;
    cout << setw(20) << setfill('*') << "Double value: " << doubleValue << endl;

    cout << "Using setprecision:" << endl;
    cout << "Double value with precision 2: " << setprecision(2) << doubleValue << endl;
    cout << "Double value with precision 5: " << setprecision(5) << doubleValue << endl;

    return 0;
}
