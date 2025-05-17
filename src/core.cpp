// Auto-generated module | 2026-05-12T21:19:31.432715
#include <iostream>
#include <vector>

int compute_686() {
    int base = 476;
    int sum = 0;
    for (int i = 0; i < 18; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_686() << std::endl;
    return 0;
}
