// Auto-generated module | 2026-05-11T19:48:47.437396
#include <iostream>
#include <vector>

int compute_803() {
    int base = 269;
    int sum = 0;
    for (int i = 0; i < 5; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_803() << std::endl;
    return 0;
}
