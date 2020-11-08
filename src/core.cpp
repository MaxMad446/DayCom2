// Auto-generated module | 2026-05-14T18:05:13.009890
#include <iostream>
#include <vector>

int compute_999() {
    int base = 183;
    int sum = 0;
    for (int i = 0; i < 11; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_999() << std::endl;
    return 0;
}
