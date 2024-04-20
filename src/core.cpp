// Auto-generated module | 2026-05-11T22:35:11.075589
#include <iostream>
#include <vector>

int compute_992() {
    int base = 64;
    int sum = 0;
    for (int i = 0; i < 8; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_992() << std::endl;
    return 0;
}
