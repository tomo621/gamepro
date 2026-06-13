#include <iostream>

void func(int x) {
    std::cout << "func(int) が呼ばれました: " << x << std::endl;
}

void func(char* p) {
    std::cout << "func(char*) が呼ばれました" << std::endl;
}


void processPointer(char* p) {
    if (p == nullptr) {
        std::cout << "processPointer: 無効なポインタ (nullptr) が渡されたため、処理を中断します。" << std::endl;
        return;
    }
    std::cout << "processPointer: ポインタは有効です。内容 -> " << p << std::endl;
}

int main() {
    std::cout << " オーバーロードでの nullptr / NULL の検証 ---" << std::endl;

    
    std::cout << "func(nullptr) の呼び出し結果: ";
    func(nullptr);

    
    

    std::cout << "\n--- nullptr チェックの検証 ---" << std::endl;
   
    processPointer(nullptr);

  

    return 0;
}