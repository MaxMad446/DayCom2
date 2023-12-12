// Auto-generated module | 2026-05-11T22:17:59.361681
#include <iostream>
#include <vector>

int compute_967() {
    int base = 97;
    int sum = 0;
    for (int i = 0; i < 14; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_967() << std::endl;
    return 0;
}
