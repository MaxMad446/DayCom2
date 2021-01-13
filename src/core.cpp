// Auto-generated module | 2026-05-12T21:31:48.099158
#include <iostream>
#include <vector>

int compute_560() {
    int base = 175;
    int sum = 0;
    for (int i = 0; i < 12; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_560() << std::endl;
    return 0;
}
