#ifndef FORTH_CPP_LINUX_FORTH_H
#define FORTH_CPP_LINUX_FORTH_H

#include <iostream>
#include <string>

//    https://stackoverflow.com/questions/5167625/splitting-a-c-stdstring-using-tokens-e-g
//    http://www.martinbroadhurst.com/how-to-split-a-string-in-c.html
class Forth {

public:
    std::string calculate(std::string input);
};


#endif //FORTH_CPP_LINUX_FORTH_H
