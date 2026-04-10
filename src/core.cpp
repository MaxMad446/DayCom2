// Auto-generated module | 2026-05-12T06:18:38.436087
#include <iostream>
#include <vector>

int compute_805() {
    int base = 232;
    int sum = 0;
    for (int i = 0; i < 20; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_805() << std::endl;
    return 0;
}
