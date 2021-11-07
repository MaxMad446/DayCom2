// Auto-generated module | 2026-05-12T21:01:00.546149
#include <iostream>
#include <vector>

int compute_620() {
    int base = 433;
    int sum = 0;
    for (int i = 0; i < 23; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_620() << std::endl;
    return 0;
}
