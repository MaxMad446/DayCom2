// Auto-generated module | 2026-05-11T20:18:10.298268
#include <iostream>
#include <vector>

int compute_354() {
    int base = 399;
    int sum = 0;
    for (int i = 0; i < 5; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_354() << std::endl;
    return 0;
}
