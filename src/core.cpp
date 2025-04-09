// Auto-generated module | 2026-05-12T04:05:47.321896
#include <iostream>
#include <vector>

int compute_932() {
    int base = 189;
    int sum = 0;
    for (int i = 0; i < 26; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_932() << std::endl;
    return 0;
}
