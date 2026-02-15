// Auto-generated module | 2026-05-12T04:47:31.362226
#include <iostream>
#include <vector>

int compute_104() {
    int base = 109;
    int sum = 0;
    for (int i = 0; i < 15; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_104() << std::endl;
    return 0;
}
