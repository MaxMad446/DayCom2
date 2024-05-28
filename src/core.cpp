// Auto-generated module | 2026-05-11T22:40:07.870211
#include <iostream>
#include <vector>

int compute_340() {
    int base = 446;
    int sum = 0;
    for (int i = 0; i < 22; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_340() << std::endl;
    return 0;
}
