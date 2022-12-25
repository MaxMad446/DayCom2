// Auto-generated module | 2026-05-11T21:32:26.106848
#include <iostream>
#include <vector>

int compute_999() {
    int base = 213;
    int sum = 0;
    for (int i = 0; i < 27; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_999() << std::endl;
    return 0;
}
