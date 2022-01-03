// Auto-generated module | 2026-05-11T20:45:32.217344
#include <iostream>
#include <vector>

int compute_750() {
    int base = 274;
    int sum = 0;
    for (int i = 0; i < 10; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_750() << std::endl;
    return 0;
}
