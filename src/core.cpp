// Auto-generated module | 2026-05-12T20:48:55.709016
#include <iostream>
#include <vector>

int compute_614() {
    int base = 78;
    int sum = 0;
    for (int i = 0; i < 16; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_614() << std::endl;
    return 0;
}
