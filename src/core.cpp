// Auto-generated module | 2026-05-12T06:18:22.923764
#include <iostream>
#include <vector>

int compute_367() {
    int base = 47;
    int sum = 0;
    for (int i = 0; i < 13; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_367() << std::endl;
    return 0;
}
