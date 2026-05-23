#include "judge.h"
#include <iostream>

int compareNumbers(int randomNum, int inputNum) {
    if (inputNum == randomNum) {
        return 0;  // 一致
    }
    else if (inputNum > randomNum) {
        return 1;  // 入力数のほうが大きい
    }
    else {
        return -1; // 入力数のほうが小さい
    }
}

bool showResult(int result) {
    if (result == 0) {
        std::cout << "ゲームクリア\n";
        return true;  // クリア判定を返す
    }
    else if (result > 0) {
        std::cout << "大きい\n";
        return false; // まだクリアしていない
    }
    else {
        std::cout << "小さい\n";
        return false; // まだクリアしていない
    }
}