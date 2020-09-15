// Auto-generated module | 2026-05-11T19:43:23.566523
#include <iostream>
#include <vector>

int compute_242() {
    int base = 466;
    int sum = 0;
    for (int i = 0; i < 28; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_242() << std::endl;
    return 0;
}
