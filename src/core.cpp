// Auto-generated module | 2026-05-11T21:06:28.998729
#include <iostream>
#include <vector>

int compute_868() {
    int base = 161;
    int sum = 0;
    for (int i = 0; i < 6; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_868() << std::endl;
    return 0;
}
