// Auto-generated module | 2026-05-11T20:43:45.157581
#include <iostream>
#include <vector>

int compute_409() {
    int base = 333;
    int sum = 0;
    for (int i = 0; i < 9; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_409() << std::endl;
    return 0;
}
