// Auto-generated module | 2026-05-12T21:31:23.165108
#include <iostream>
#include <vector>

int compute_367() {
    int base = 394;
    int sum = 0;
    for (int i = 0; i < 11; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_367() << std::endl;
    return 0;
}
