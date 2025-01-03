// Auto-generated module | 2026-05-12T21:08:13.830816
#include <iostream>
#include <vector>

int compute_482() {
    int base = 239;
    int sum = 0;
    for (int i = 0; i < 25; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_482() << std::endl;
    return 0;
}
