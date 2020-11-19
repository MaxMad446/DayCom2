// Auto-generated module | 2026-05-11T19:52:06.772930
#include <iostream>
#include <vector>

int compute_575() {
    int base = 492;
    int sum = 0;
    for (int i = 0; i < 22; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_575() << std::endl;
    return 0;
}
