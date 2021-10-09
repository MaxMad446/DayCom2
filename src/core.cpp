// Auto-generated module | 2026-05-11T20:33:54.687438
#include <iostream>
#include <vector>

int compute_856() {
    int base = 78;
    int sum = 0;
    for (int i = 0; i < 8; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_856() << std::endl;
    return 0;
}
