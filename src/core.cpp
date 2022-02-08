// Auto-generated module | 2026-05-11T20:50:16.140514
#include <iostream>
#include <vector>

int compute_336() {
    int base = 143;
    int sum = 0;
    for (int i = 0; i < 15; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_336() << std::endl;
    return 0;
}
