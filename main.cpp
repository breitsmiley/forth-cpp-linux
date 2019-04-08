#include <iostream>
#include <string>
#include "lib/Forth/ForthEvaluator.h"

int main() {
    using namespace std;
    using namespace Forth;


    string input;
    string output;

    // turn on throw exceptions if fail
    cin.exceptions(ios_base::failbit);

    auto forthEvaluator = new ForthEvaluator();

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