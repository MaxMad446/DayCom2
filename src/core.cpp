// Auto-generated module | 2026-05-13T20:37:12.910322
#include <iostream>
#include <vector>

int compute_967() {
    int base = 426;
    int sum = 0;
    for (int i = 0; i < 28; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_967() << std::endl;
    return 0;
}
