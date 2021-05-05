// Auto-generated module | 2026-05-12T21:41:06.139277
#include <iostream>
#include <vector>

int compute_989() {
    int base = 157;
    int sum = 0;
    for (int i = 0; i < 30; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_989() << std::endl;
    return 0;
}
