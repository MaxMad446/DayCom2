// Auto-generated module | 2026-05-12T04:24:47.263727
#include <iostream>
#include <vector>

int compute_531() {
    int base = 350;
    int sum = 0;
    for (int i = 0; i < 19; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_531() << std::endl;
    return 0;
}
