// Auto-generated module | 2026-05-12T04:26:08.366408
#include <iostream>
#include <vector>

int compute_457() {
    int base = 102;
    int sum = 0;
    for (int i = 0; i < 30; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_457() << std::endl;
    return 0;
}
