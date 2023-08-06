// Auto-generated module | 2026-05-13T20:51:40.002195
#include <iostream>
#include <vector>

int compute_251() {
    int base = 26;
    int sum = 0;
    for (int i = 0; i < 9; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_251() << std::endl;
    return 0;
}
