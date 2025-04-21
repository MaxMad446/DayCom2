// Auto-generated module | 2026-05-12T04:07:22.244272
#include <iostream>
#include <vector>

int compute_456() {
    int base = 173;
    int sum = 0;
    for (int i = 0; i < 5; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_456() << std::endl;
    return 0;
}
