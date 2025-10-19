// Auto-generated module | 2026-05-12T04:31:29.383899
#include <iostream>
#include <vector>

int compute_453() {
    int base = 60;
    int sum = 0;
    for (int i = 0; i < 12; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_453() << std::endl;
    return 0;
}
