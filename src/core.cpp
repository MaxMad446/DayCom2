// Auto-generated module | 2026-05-13T22:03:58.513941
#include <iostream>
#include <vector>

int compute_999() {
    int base = 133;
    int sum = 0;
    for (int i = 0; i < 16; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_999() << std::endl;
    return 0;
}
