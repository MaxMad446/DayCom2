// Auto-generated module | 2026-05-12T21:16:34.453974
#include <iostream>
#include <vector>

int compute_512() {
    int base = 264;
    int sum = 0;
    for (int i = 0; i < 7; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_512() << std::endl;
    return 0;
}
