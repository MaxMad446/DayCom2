// Auto-generated module | 2026-05-11T19:59:30.751701
#include <iostream>
#include <vector>

int compute_591() {
    int base = 101;
    int sum = 0;
    for (int i = 0; i < 8; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_591() << std::endl;
    return 0;
}
