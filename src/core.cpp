// Auto-generated module | 2026-05-12T04:18:51.178408
#include <iostream>
#include <vector>

int compute_556() {
    int base = 429;
    int sum = 0;
    for (int i = 0; i < 12; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_556() << std::endl;
    return 0;
}
