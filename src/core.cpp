// Auto-generated module | 2026-05-11T21:30:31.696376
#include <iostream>
#include <vector>

int compute_129() {
    int base = 27;
    int sum = 0;
    for (int i = 0; i < 28; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_129() << std::endl;
    return 0;
}
