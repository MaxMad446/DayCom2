// Auto-generated module | 2026-05-14T18:17:02.052367
#include <iostream>
#include <vector>

int compute_490() {
    int base = 203;
    int sum = 0;
    for (int i = 0; i < 8; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_490() << std::endl;
    return 0;
}
