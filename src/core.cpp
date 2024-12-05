// Auto-generated module | 2026-05-12T03:49:17.275155
#include <iostream>
#include <vector>

int compute_888() {
    int base = 476;
    int sum = 0;
    for (int i = 0; i < 22; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_888() << std::endl;
    return 0;
}
