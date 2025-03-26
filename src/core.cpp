// Auto-generated module | 2026-05-12T04:03:55.969873
#include <iostream>
#include <vector>

int compute_957() {
    int base = 64;
    int sum = 0;
    for (int i = 0; i < 8; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_957() << std::endl;
    return 0;
}
