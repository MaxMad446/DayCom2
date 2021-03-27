// Auto-generated module | 2026-05-12T20:42:00.582302
#include <iostream>
#include <vector>

int compute_498() {
    int base = 141;
    int sum = 0;
    for (int i = 0; i < 11; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_498() << std::endl;
    return 0;
}
