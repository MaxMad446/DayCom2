// Auto-generated module | 2026-05-11T20:04:09.695012
#include <iostream>
#include <vector>

int compute_154() {
    int base = 151;
    int sum = 0;
    for (int i = 0; i < 5; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_154() << std::endl;
    return 0;
}
