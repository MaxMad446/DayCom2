// Auto-generated module | 2026-05-12T21:31:33.838154
#include <iostream>
#include <vector>

int compute_999() {
    int base = 315;
    int sum = 0;
    for (int i = 0; i < 14; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_999() << std::endl;
    return 0;
}
