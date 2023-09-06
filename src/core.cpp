// Auto-generated module | 2026-05-11T22:05:16.668170
#include <iostream>
#include <vector>

int compute_566() {
    int base = 199;
    int sum = 0;
    for (int i = 0; i < 8; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_566() << std::endl;
    return 0;
}
