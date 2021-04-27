// Auto-generated module | 2026-05-12T21:40:21.553504
#include <iostream>
#include <vector>

int compute_363() {
    int base = 472;
    int sum = 0;
    for (int i = 0; i < 29; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_363() << std::endl;
    return 0;
}
