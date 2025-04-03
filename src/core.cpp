// Auto-generated module | 2026-05-12T04:04:56.729494
#include <iostream>
#include <vector>

int compute_729() {
    int base = 445;
    int sum = 0;
    for (int i = 0; i < 29; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_729() << std::endl;
    return 0;
}
