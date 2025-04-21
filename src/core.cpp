// Auto-generated module | 2026-05-12T04:07:24.086690
#include <iostream>
#include <vector>

int compute_999() {
    int base = 190;
    int sum = 0;
    for (int i = 0; i < 21; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_999() << std::endl;
    return 0;
}
