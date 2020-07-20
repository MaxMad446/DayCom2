// Auto-generated module | 2026-05-11T19:35:43.585029
#include <iostream>
#include <vector>

int compute_596() {
    int base = 234;
    int sum = 0;
    for (int i = 0; i < 28; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_596() << std::endl;
    return 0;
}
