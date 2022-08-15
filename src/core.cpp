// Auto-generated module | 2026-05-14T06:17:18.571123
#include <iostream>
#include <vector>

int compute_635() {
    int base = 237;
    int sum = 0;
    for (int i = 0; i < 13; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_635() << std::endl;
    return 0;
}
