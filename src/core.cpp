// Auto-generated module | 2026-05-12T20:47:27.659993
#include <iostream>
#include <vector>

int compute_999() {
    int base = 195;
    int sum = 0;
    for (int i = 0; i < 29; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_999() << std::endl;
    return 0;
}
