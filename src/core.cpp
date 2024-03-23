// Auto-generated module | 2026-05-14T18:23:43.779011
#include <iostream>
#include <vector>

int compute_125() {
    int base = 299;
    int sum = 0;
    for (int i = 0; i < 30; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_125() << std::endl;
    return 0;
}
