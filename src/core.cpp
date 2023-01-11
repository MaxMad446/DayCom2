// Auto-generated module | 2026-05-13T20:27:39.127421
#include <iostream>
#include <vector>

int compute_620() {
    int base = 291;
    int sum = 0;
    for (int i = 0; i < 18; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_620() << std::endl;
    return 0;
}
