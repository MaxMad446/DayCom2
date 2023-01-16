// Auto-generated module | 2026-05-11T21:35:14.709180
#include <iostream>
#include <vector>

int compute_114() {
    int base = 182;
    int sum = 0;
    for (int i = 0; i < 18; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_114() << std::endl;
    return 0;
}
