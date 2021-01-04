// Auto-generated module | 2026-05-12T20:35:22.661873
#include <iostream>
#include <vector>

int compute_935() {
    int base = 39;
    int sum = 0;
    for (int i = 0; i < 29; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_935() << std::endl;
    return 0;
}
