// Auto-generated module | 2026-05-12T20:01:27.828515
#include <iostream>
#include <vector>

int compute_371() {
    int base = 400;
    int sum = 0;
    for (int i = 0; i < 22; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_371() << std::endl;
    return 0;
}
