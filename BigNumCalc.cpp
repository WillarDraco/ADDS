#include "BigNumCalc.h"

BigNumCalc::BigNumCalc() {

}

BigNumCalc::~BigNumCalc() {

}

std::list<int> BigNumCalc::buildBigNum(std::string numString) {
    std::list<int> num;
    int length = numString.length();

    for (int i = 0; i < length; i++) {
        num.push_back(numString[i] - '0');
    }

    return num;
}

std::list<int> BigNumCalc::add(std::list<int> num1, std::list<int> num2) {
    auto it1 = num1.rbegin();
    auto it2 = num2.rbegin();
    std::list<int> added;

    int carry = 0;

    while (it1 != num1.rend() || it2 != num2.rend()) {
        int addition = carry;

        if (it1 != num1.rend()) {
            addition += *it1;
            it1++;
        }

        if (it2 != num2.rend()) {
            addition += *it2;
            it2++;
        }

        added.push_front(addition % 10);
        carry = addition / 10;
    }

    while (carry >= 1) {
        added.push_front(carry % 10);
        carry = carry / 10;
    }

    return added;
}

std::list<int> BigNumCalc::sub(std::list<int> num1, std::list<int> num2) {
    auto it1 = num1.rbegin();
    auto it2 = num2.rbegin();
    std::list<int> subbed;

    int carry = 0;

    while (it1 != num1.rend() || it2 != num2.rend()) {
        int subtraction = 0;

        if (it1 != num1.rend()) {
            subtraction += *it1;
            it1++;
            subtraction = subtraction - carry;
        }

        if (it2 != num2.rend()) {
            subtraction -= *it2;
            it2++;
        }

        if (subtraction < 0) {
            carry = 1;
            subtraction = subtraction + 10;
        } else {
            carry = 0;
        }

        subbed.push_front(subtraction);
    }

    while (!subbed.empty() && subbed.front() == 0) {
            subbed.pop_front();
    }

    return subbed;
}

std::list<int> BigNumCalc::mul(std::list<int> num1, std::list<int> num2) {
    auto it1 = num1.rbegin();
    std::list<int> multed;
    int mult = *num2.begin();
    int carry = 0;

    while (it1 != num1.rend()) {
        int multiplied = (*it1 * mult) + carry;
        multed.push_back(multiplied % 10);
        carry = multiplied / 10;
        it1++;
    }

    while (carry > 0) {
        multed.push_front(carry % 10);
        carry = carry / 10;
    }

    return multed;
}