// Auto-generated module | 2026-05-12T21:13:43.238526
#include <iostream>
#include <vector>

int compute_248() {
    int base = 112;
    int sum = 0;
    for (int i = 0; i < 30; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_248() << std::endl;
    return 0;
}
