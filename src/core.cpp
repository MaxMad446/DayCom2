// Auto-generated module | 2026-05-12T04:47:59.599322
#include <iostream>
#include <vector>

int compute_413() {
    int base = 189;
    int sum = 0;
    for (int i = 0; i < 12; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_413() << std::endl;
    return 0;
}
