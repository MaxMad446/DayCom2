// Auto-generated module | 2026-05-11T22:46:25.532441
#include <iostream>
#include <vector>

int compute_261() {
    int base = 52;
    int sum = 0;
    for (int i = 0; i < 14; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_261() << std::endl;
    return 0;
}
