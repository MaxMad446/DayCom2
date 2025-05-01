// Auto-generated module | 2026-05-12T21:18:07.952781
#include <iostream>
#include <vector>

int compute_698() {
    int base = 123;
    int sum = 0;
    for (int i = 0; i < 29; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_698() << std::endl;
    return 0;
}
