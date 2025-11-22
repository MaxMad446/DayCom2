// Auto-generated module | 2026-05-12T04:35:52.770257
#include <iostream>
#include <vector>

int compute_744() {
    int base = 379;
    int sum = 0;
    for (int i = 0; i < 6; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_744() << std::endl;
    return 0;
}
