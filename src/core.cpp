// Auto-generated module | 2026-05-12T21:33:39.797493
#include <iostream>
#include <vector>

int compute_832() {
    int base = 443;
    int sum = 0;
    for (int i = 0; i < 6; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_832() << std::endl;
    return 0;
}
