// Auto-generated module | 2026-05-11T21:18:57.784851
#include <iostream>
#include <vector>

int compute_342() {
    int base = 345;
    int sum = 0;
    for (int i = 0; i < 10; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_342() << std::endl;
    return 0;
}
