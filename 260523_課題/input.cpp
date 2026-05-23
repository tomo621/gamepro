#include "input.h"
#include <iostream>
#include <random>

int getRandomNumber() {
    // 乱数生成器の初期化（毎回同じパターンにならないようstaticを使用）
    static std::random_device rd;
    static std::mt19937 gen(rd());
    std::uniform_int_distribution<int> dist(0, 9);

    return dist(gen);
}

int getNumberInput() {
    int inputNum;
    std::cout << "0〜9の数値を入力してください: ";
    std::cin >> inputNum;
    return inputNum;
}