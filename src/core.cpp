// Auto-generated module | 2026-05-11T20:49:01.959998
#include <iostream>
#include <vector>

int compute_287() {
    int base = 12;
    int sum = 0;
    for (int i = 0; i < 10; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_287() << std::endl;
    return 0;
}
