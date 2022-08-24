// Auto-generated module | 2026-05-11T21:16:18.502564
#include <iostream>
#include <vector>

int compute_367() {
    int base = 33;
    int sum = 0;
    for (int i = 0; i < 17; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_367() << std::endl;
    return 0;
}
