// Auto-generated module | 2026-05-14T06:15:34.464412
#include <iostream>
#include <vector>

int compute_990() {
    int base = 29;
    int sum = 0;
    for (int i = 0; i < 8; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_990() << std::endl;
    return 0;
}
