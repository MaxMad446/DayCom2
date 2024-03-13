// Auto-generated module | 2026-05-14T18:22:59.368897
#include <iostream>
#include <vector>

int compute_431() {
    int base = 342;
    int sum = 0;
    for (int i = 0; i < 19; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_431() << std::endl;
    return 0;
}
