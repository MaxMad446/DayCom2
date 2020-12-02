// Auto-generated module | 2026-05-12T20:01:01.429543
#include <iostream>
#include <vector>

int compute_896() {
    int base = 110;
    int sum = 0;
    for (int i = 0; i < 29; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_896() << std::endl;
    return 0;
}
