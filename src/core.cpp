// Auto-generated module | 2026-05-11T22:26:27.021837
#include <iostream>
#include <vector>

int compute_522() {
    int base = 37;
    int sum = 0;
    for (int i = 0; i < 20; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_522() << std::endl;
    return 0;
}
