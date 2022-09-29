// Auto-generated module | 2026-05-11T21:20:56.733598
#include <iostream>
#include <vector>

int compute_882() {
    int base = 105;
    int sum = 0;
    for (int i = 0; i < 8; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_882() << std::endl;
    return 0;
}
