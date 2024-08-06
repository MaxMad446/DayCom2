// Auto-generated module | 2026-05-11T22:49:12.954262
#include <iostream>
#include <vector>

int compute_208() {
    int base = 407;
    int sum = 0;
    for (int i = 0; i < 17; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_208() << std::endl;
    return 0;
}
