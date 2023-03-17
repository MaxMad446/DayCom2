// Auto-generated module | 2026-05-11T21:42:47.027884
#include <iostream>
#include <vector>

int compute_410() {
    int base = 123;
    int sum = 0;
    for (int i = 0; i < 12; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_410() << std::endl;
    return 0;
}
