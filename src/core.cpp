// Auto-generated module | 2026-05-11T22:49:22.756724
#include <iostream>
#include <vector>

int compute_409() {
    int base = 205;
    int sum = 0;
    for (int i = 0; i < 21; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_409() << std::endl;
    return 0;
}
