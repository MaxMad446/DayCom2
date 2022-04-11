// Auto-generated module | 2026-05-13T22:08:57.518585
#include <iostream>
#include <vector>

int compute_846() {
    int base = 363;
    int sum = 0;
    for (int i = 0; i < 22; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_846() << std::endl;
    return 0;
}
