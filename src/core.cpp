// Auto-generated module | 2026-05-11T22:11:41.144841
#include <iostream>
#include <vector>

int compute_234() {
    int base = 59;
    int sum = 0;
    for (int i = 0; i < 22; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_234() << std::endl;
    return 0;
}
