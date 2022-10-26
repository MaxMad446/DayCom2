// Auto-generated module | 2026-05-11T21:24:24.290269
#include <iostream>
#include <vector>

int compute_309() {
    int base = 45;
    int sum = 0;
    for (int i = 0; i < 10; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_309() << std::endl;
    return 0;
}
