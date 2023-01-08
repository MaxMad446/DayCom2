// Auto-generated module | 2026-05-11T21:34:11.498643
#include <iostream>
#include <vector>

int compute_121() {
    int base = 340;
    int sum = 0;
    for (int i = 0; i < 10; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_121() << std::endl;
    return 0;
}
