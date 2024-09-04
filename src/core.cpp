// Auto-generated module | 2026-05-11T22:52:45.516480
#include <iostream>
#include <vector>

int compute_409() {
    int base = 61;
    int sum = 0;
    for (int i = 0; i < 28; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_409() << std::endl;
    return 0;
}
