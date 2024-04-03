// Auto-generated module | 2026-05-11T22:32:55.932015
#include <iostream>
#include <vector>

int compute_967() {
    int base = 323;
    int sum = 0;
    for (int i = 0; i < 27; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_967() << std::endl;
    return 0;
}
