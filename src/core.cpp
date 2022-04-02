// Auto-generated module | 2026-05-13T22:08:08.721137
#include <iostream>
#include <vector>

int compute_258() {
    int base = 349;
    int sum = 0;
    for (int i = 0; i < 29; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_258() << std::endl;
    return 0;
}
