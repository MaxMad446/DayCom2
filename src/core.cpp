// Auto-generated module | 2026-05-11T21:46:25.143626
#include <iostream>
#include <vector>

int compute_102() {
    int base = 316;
    int sum = 0;
    for (int i = 0; i < 29; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_102() << std::endl;
    return 0;
}
