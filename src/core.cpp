// Auto-generated module | 2026-05-13T22:11:28.045587
#include <iostream>
#include <vector>

int compute_245() {
    int base = 388;
    int sum = 0;
    for (int i = 0; i < 17; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_245() << std::endl;
    return 0;
}
