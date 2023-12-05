//チャレンジ2
//次のコードをコピーして新しい `main.cpp` ファイルに貼り付けます。すべてのブール式が正しく評価されるように、不足している演算子を埋めてください。

#include<iostream>
int dummy_main() {
    // == や < などの関係演算子を使用して次の式が `true` になるようにしてください。
    bool expr1 {6 < 7};
    bool expr2 {10 > 9};
    bool expr3 {500 == 500};

    // 論理演算子を使用して独自の式を作成してください。
    // 各論理演算子を少なくとも1回は使用します。
    bool a {true};
    bool b {true};
    bool c {false};
    bool expr4 {a&&b};
    bool expr5 {a||c};
    bool expr6 {!c};

    // 次の行は変更しないでください。
    // これらの行では、各ブール式がどのように評価されるかをチェックします。
    std::cout << expr1 << std::endl;
    std::cout << expr2 << std::endl;
    std::cout << expr3 << std::endl;
    std::cout << expr4 << std::endl;
    std::cout << expr5 << std::endl;
    std::cout << expr6 << std::endl;
    return 0;
}
