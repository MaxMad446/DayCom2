// Auto-generated module | 2026-05-11T20:18:01.005512
#include <iostream>
#include <vector>

int compute_954() {
    int base = 272;
    int sum = 0;
    for (int i = 0; i < 24; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_954() << std::endl;
    return 0;
}
