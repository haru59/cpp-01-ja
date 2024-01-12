//# チャレンジ3

//std::vector<int> を引数にとり、各要素の値を2倍にした新しい std::vector<int> を返す関数 double_elements を作成してください。次に、範囲ベースのforループを使用して、元のvectorと新しいvectorの両方の要素を出力します。

#include <iostream>
#include <vector>

std::vector<int> double_elements(const std::vector<int>& numbers){
    std::vector<int> result;
    for(int i : numbers){
        result.push_back(i * 2);
    }
    return result;
}

int main() {
    std::vector<int> numbers = {1, 2, 3, 4, 5};
    std::cout << "Origin vector" << std::endl;
    for (auto num : numbers){
        std::cout << num << " ";
    }

    std::cout<<std::endl;
    
    std::vector<int> new_vector;
    new_vector = double_elements(numbers);
    std::cout << "New vector" << std::endl;
    for (auto num : new_vector){
        std::cout << num << " ";
    }
    

}