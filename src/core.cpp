// Auto-generated module | 2026-05-12T04:30:37.800628
#include <iostream>
#include <vector>

int compute_512() {
    int base = 194;
    int sum = 0;
    for (int i = 0; i < 7; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_512() << std::endl;
    return 0;
}
