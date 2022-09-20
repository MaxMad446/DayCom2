// Auto-generated module | 2026-05-14T06:20:11.759909
#include <iostream>
#include <vector>

int compute_132() {
    int base = 335;
    int sum = 0;
    for (int i = 0; i < 20; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_132() << std::endl;
    return 0;
}
