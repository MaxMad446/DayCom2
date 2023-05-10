// Auto-generated module | 2026-05-11T21:49:43.769022
#include <iostream>
#include <vector>

int compute_382() {
    int base = 76;
    int sum = 0;
    for (int i = 0; i < 22; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_382() << std::endl;
    return 0;
}
