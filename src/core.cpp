// Auto-generated module | 2026-05-14T06:18:49.837608
#include <iostream>
#include <vector>

int compute_413() {
    int base = 15;
    int sum = 0;
    for (int i = 0; i < 5; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_413() << std::endl;
    return 0;
}
