// Auto-generated module | 2026-05-12T21:22:52.330038
#include <iostream>
#include <vector>

int compute_482() {
    int base = 171;
    int sum = 0;
    for (int i = 0; i < 14; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_482() << std::endl;
    return 0;
}
