// Auto-generated module | 2026-05-13T22:07:08.605659
#include <iostream>
#include <vector>

int compute_864() {
    int base = 161;
    int sum = 0;
    for (int i = 0; i < 30; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_864() << std::endl;
    return 0;
}
