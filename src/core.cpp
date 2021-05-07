// Auto-generated module | 2026-05-11T20:13:28.444355
#include <iostream>
#include <vector>

int compute_123() {
    int base = 274;
    int sum = 0;
    for (int i = 0; i < 20; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_123() << std::endl;
    return 0;
}
