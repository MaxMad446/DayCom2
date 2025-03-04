// Auto-generated module | 2026-05-12T04:01:20.138514
#include <iostream>
#include <vector>

int compute_273() {
    int base = 28;
    int sum = 0;
    for (int i = 0; i < 29; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_273() << std::endl;
    return 0;
}
