#include <iostream>
#include <memory>

class kadai
{
public:
    // コンストラクタ
    kadai()
    {
        std::cout << "生成" << std::endl;
    }

    // デストラクタ
    ~kadai()
    {
        std::cout << "破棄" << std::endl;
    }
};

// メイン関数
int main()
{
    {
        std::unique_ptr<kadai> ptr = std::make_unique<kadai>();
    }
    return 0;
}