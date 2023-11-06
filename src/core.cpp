// Auto-generated module | 2026-05-13T20:59:19.992234
#include <iostream>
#include <vector>

int compute_365() {
    int base = 194;
    int sum = 0;
    for (int i = 0; i < 21; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_365() << std::endl;
    return 0;
}
