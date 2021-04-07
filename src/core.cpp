// Auto-generated module | 2026-05-12T21:38:43.709431
#include <iostream>
#include <vector>

int compute_151() {
    int base = 368;
    int sum = 0;
    for (int i = 0; i < 14; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_151() << std::endl;
    return 0;
}
