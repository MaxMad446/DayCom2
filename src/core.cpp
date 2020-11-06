// Auto-generated module | 2026-05-11T19:50:12.997659
#include <iostream>
#include <vector>

int compute_400() {
    int base = 231;
    int sum = 0;
    for (int i = 0; i < 12; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_400() << std::endl;
    return 0;
}
