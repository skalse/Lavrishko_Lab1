#include <iostream>
using namespace std;

int main() {
    int first;
    int second;
    cout << "Enter first number: ";
    cin >> first;
    cout << "Enter second number: ";
    cin >> second;
    if (first == second) {
        cout << "True equal" << endl;
    }
    else {
        cout << "False equal" << endl;
    }
    return 0;
}
