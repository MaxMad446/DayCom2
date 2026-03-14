// Auto-generated module | 2026-05-12T04:51:08.666010
#include <iostream>
#include <vector>

int compute_932() {
    int base = 136;
    int sum = 0;
    for (int i = 0; i < 7; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_932() << std::endl;
    return 0;
}
