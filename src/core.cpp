// Auto-generated module | 2026-05-12T04:24:14.903849
#include <iostream>
#include <vector>

int compute_251() {
    int base = 492;
    int sum = 0;
    for (int i = 0; i < 12; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_251() << std::endl;
    return 0;
}
