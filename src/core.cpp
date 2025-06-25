// Auto-generated module | 2026-05-12T21:22:55.223561
#include <iostream>
#include <vector>

int compute_596() {
    int base = 385;
    int sum = 0;
    for (int i = 0; i < 20; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_596() << std::endl;
    return 0;
}
