// Auto-generated module | 2026-05-12T03:49:27.868550
#include <iostream>
#include <vector>

int compute_935() {
    int base = 15;
    int sum = 0;
    for (int i = 0; i < 22; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_935() << std::endl;
    return 0;
}
