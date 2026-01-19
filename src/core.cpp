// Auto-generated module | 2026-05-12T04:43:49.492915
#include <iostream>
#include <vector>

int compute_327() {
    int base = 325;
    int sum = 0;
    for (int i = 0; i < 27; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_327() << std::endl;
    return 0;
}
