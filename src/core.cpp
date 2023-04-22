// Auto-generated module | 2026-05-11T21:47:14.496715
#include <iostream>
#include <vector>

int compute_400() {
    int base = 362;
    int sum = 0;
    for (int i = 0; i < 20; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_400() << std::endl;
    return 0;
}
