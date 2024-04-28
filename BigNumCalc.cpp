#include "BigNumCalc.h"

std::list<int> BigNumCalc::buildBigNum(std::string numString) {
    std::list<int> num;
    int length = numString.length();

    auto it = num.begin();

    for (int i = length - 1; i > 0; i--) {
        num.insert(it, numString[i]);
        it++;
    }
}

std::list<int> BigNumCalc::add(std::list<int> num1, std::list<int> num2) {
    auto it1 = num1.begin();
    auto it2 = num2.begin();
    std::list<int> added;
    auto adit = added.begin();

    int carry = 0;

    while (it1 != num1.end() || it2 != num2.end()) {
        int addition = *it1 + *it2 + carry;
        added.insert(adit, addition);
        carry = addition % 10;

    }

    while (carry > 0) {
        added.insert(adit, carry % 10);
        carry = carry / 10;
    }

    return added;
}

std::list<int> BigNumCalc::sub(std::list<int> num1, std::list<int> num2) {
    auto it1 = num1.begin();
    auto it2 = num2.begin();
    std::list<int> subbed;
    auto subit = subbed.begin();

    int carry = 0;

    while (it1 != num1.end() || it2 != num2.end()) {
        int subtraction = (*it1 - carry) - *it2;

        if (subtraction < 0) {
            carry = 1;
            subtraction = subtraction * -1;
        } else {
            carry = 0;
        }

        subbed.insert(subit, subtraction);
    }

    if (*subit == 0) {
        subbed.erase(subit);
    }

    return subbed;
}

std::list<int> BigNumCalc::mul(std::list<int> num1, std::list<int> num2) {
    auto it1 = num1.begin();
    std::list<int> multed;
    int mult = *num2.begin();
    int carry = 0;

    while (it1 != num1.end()) {
        int multiplied = *it1 * mult + carry;
        multed.push_back(multiplied % 10);
        carry = multiplied / 10;
    }

    while (carry > 0) {
        multed.push_back(carry % 10);
        carry = carry / 10;
    }

    return multed;
}