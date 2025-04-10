// Auto-generated module | 2026-05-12T04:05:55.678781
#include <iostream>
#include <vector>

int compute_490() {
    int base = 36;
    int sum = 0;
    for (int i = 0; i < 15; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_490() << std::endl;
    return 0;
}
