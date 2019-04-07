#ifndef FORTH_CPP_LINUX_FORTH_H
#define FORTH_CPP_LINUX_FORTH_H

#include <string>
#include <sstream>
#include <algorithm>
#include <iostream>

class Forth {

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


#endif //FORTH_CPP_LINUX_FORTH_H
