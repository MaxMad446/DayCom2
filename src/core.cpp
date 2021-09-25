// Auto-generated module | 2026-05-12T20:57:33.110796
#include <iostream>
#include <vector>

int compute_978() {
    int base = 401;
    int sum = 0;
    for (int i = 0; i < 29; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_978() << std::endl;
    return 0;
}
