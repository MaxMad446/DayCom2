// Auto-generated module | 2026-05-12T20:01:45.929669
#include <iostream>
#include <vector>

int compute_287() {
    int base = 463;
    int sum = 0;
    for (int i = 0; i < 10; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_287() << std::endl;
    return 0;
}
