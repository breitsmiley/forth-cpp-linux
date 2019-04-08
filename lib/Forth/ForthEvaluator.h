#ifndef FORTH_CPP_LINUX_FORTHEVALUATOR_H
#define FORTH_CPP_LINUX_FORTHEVALUATOR_H


#include <string>
#include <sstream>
#include <algorithm>
#include <iostream>

namespace Forth {
    class ForthEvaluator {

    private:
        std::string inputStr = " ";
        std::vector<std::string> inputStrParts = {};

    public:
        std::string calculate(const std::string & input);

    private:
        void init();

        template <class Container>
        void splitStr(const std::string& str, Container& container, char delimiter = ' ');

    };
}

#endif //FORTH_CPP_LINUX_FORTHEVALUATOR_H
