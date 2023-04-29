// Auto-generated module | 2026-05-13T20:36:49.769938
#include <iostream>
#include <vector>

int compute_384() {
    int base = 425;
    int sum = 0;
    for (int i = 0; i < 10; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_384() << std::endl;
    return 0;
}
