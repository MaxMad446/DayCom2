// Auto-generated module | 2026-05-12T04:30:03.066979
#include <iostream>
#include <vector>

int compute_168() {
    int base = 432;
    int sum = 0;
    for (int i = 0; i < 29; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_168() << std::endl;
    return 0;
}
