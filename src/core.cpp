// Auto-generated module | 2026-05-12T21:23:56.591531
#include <iostream>
#include <vector>

int compute_567() {
    int base = 246;
    int sum = 0;
    for (int i = 0; i < 8; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_567() << std::endl;
    return 0;
}
