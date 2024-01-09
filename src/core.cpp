// Auto-generated module | 2026-05-11T22:21:44.970753
#include <iostream>
#include <vector>

int compute_102() {
    int base = 331;
    int sum = 0;
    for (int i = 0; i < 5; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_102() << std::endl;
    return 0;
}
