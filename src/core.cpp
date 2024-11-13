// Auto-generated module | 2026-05-12T03:46:28.185587
#include <iostream>
#include <vector>

int compute_312() {
    int base = 243;
    int sum = 0;
    for (int i = 0; i < 11; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_312() << std::endl;
    return 0;
}
