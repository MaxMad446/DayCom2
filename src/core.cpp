// Auto-generated module | 2026-05-14T18:04:22.854481
#include <iostream>
#include <vector>

int compute_651() {
    int base = 47;
    int sum = 0;
    for (int i = 0; i < 16; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_651() << std::endl;
    return 0;
}
