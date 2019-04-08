#ifndef FORTH_CPP_LINUX_FORTH_WORD_H
#define FORTH_CPP_LINUX_FORTH_WORD_H


#include <string>

namespace Forth {

    class Word {

    protected:

        static const std::string PLUS_OPERATOR;
        static const std::string MINUS_OPERATOR;
        static const std::string MULTIPLICATION_OPERATOR;
        static const std::string DUP_OPERATOR;
        static const std::string DROP_OPERATOR;
        static const std::string SWAP_OPERATOR;
        static const std::string OVER_OPERATOR;

        std::string pattern;
        int value;
        bool isCompound = true;
        bool isWord = true;

    //protected:
    //    bool isWord(string & value);

    //public:
    //    explicit ForthWord(string inputValue);
    };
}

#endif //FORTH_CPP_LINUX_FORTH_WORD_H
