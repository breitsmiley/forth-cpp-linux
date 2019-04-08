#include "ForthEvaluator.h"

namespace Forth {
/**
 *
 */
    void ForthEvaluator::init() {
        this->inputStrParts.clear();
        this->inputStr.clear();
    }

/**
 *  http://www.martinbroadhurst.com/how-to-split-a-string-in-c.html
 * @tparam Container
 * @param str
 * @param container
 * @param delimiter
 */
    template<class Container>
    void ForthEvaluator::splitStr(const std::string &str, Container &container, char delimiter) {
        std::stringstream ss(str);
        std::string token;

        while (std::getline(ss, token, delimiter)) {
            container.push_back(token);
        }

    }

/**
 *
 * @param input
 * @return
 */
    std::string ForthEvaluator::calculate(const std::string &input) {

        this->init();

        this->splitStr(input, this->inputStrParts);

        for (const auto &strPart : this->inputStrParts) {
            std::cout << strPart << std::endl;
        }

        return "OK";
    }
}