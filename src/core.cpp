// Auto-generated module | 2026-05-11T20:11:09.161043
#include <iostream>
#include <vector>

int compute_251() {
    int base = 40;
    int sum = 0;
    for (int i = 0; i < 14; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_251() << std::endl;
    return 0;
}
