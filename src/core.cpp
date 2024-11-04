// Auto-generated module | 2026-05-12T03:45:24.723318
#include <iostream>
#include <vector>

int compute_292() {
    int base = 91;
    int sum = 0;
    for (int i = 0; i < 28; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_292() << std::endl;
    return 0;
}
