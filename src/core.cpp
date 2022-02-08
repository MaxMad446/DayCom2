// Auto-generated module | 2026-05-13T22:03:36.350550
#include <iostream>
#include <vector>

int compute_966() {
    int base = 57;
    int sum = 0;
    for (int i = 0; i < 8; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_966() << std::endl;
    return 0;
}
