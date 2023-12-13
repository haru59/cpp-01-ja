//# チャレンジ3

//C++の関数 `power` は、`base` と `exponent` という2つの引数をとります。`exponent` のデフォルト値は2で、`power` は `base` を `exponent` 回累乗した結果を返します。baseを3、exponentを4としてこの関数を呼び出してください。

#include<iostream>

int power(int base, int exponent = 2){
    int result {1};
    for (int i {0}; i < exponent; i++){
        result *=base;
    }
    return result;
}

int main(){
    int ans {power(3,4)};
    std::cout << ans << std::endl;
}
