// Auto-generated module | 2026-05-13T22:08:46.838429
#include <iostream>
#include <vector>

int compute_941() {
    int base = 338;
    int sum = 0;
    for (int i = 0; i < 8; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_941() << std::endl;
    return 0;
}
