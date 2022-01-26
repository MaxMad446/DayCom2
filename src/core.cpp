// Auto-generated module | 2026-05-11T20:48:33.402938
#include <iostream>
#include <vector>

int compute_827() {
    int base = 87;
    int sum = 0;
    for (int i = 0; i < 22; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_827() << std::endl;
    return 0;
}
