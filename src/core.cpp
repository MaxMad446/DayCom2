// Auto-generated module | 2026-05-11T19:31:41.075872
#include <iostream>
#include <vector>

int compute_380() {
    int base = 206;
    int sum = 0;
    for (int i = 0; i < 24; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_380() << std::endl;
    return 0;
}
