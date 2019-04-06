#include <iostream>
#include <string>
#include "lib/Forth.h"

int main() {
    using namespace std;
    string input;
    string output;

    // turn on throw exceptions if fail
    cin.exceptions(ios_base::failbit);

    auto forthEvaluator = new Forth();

    try {
        while (
                cout << "Enter sequence: " << endl
                && getline(std::cin, input)
                && input != "exit"
                ) {
            output = forthEvaluator->calculate(input);
            cout << output << endl << "-------------------------" << endl;
        }
    } catch (const std::exception &e) {
        cout << e.what() << endl;
    }

    return 0;

}