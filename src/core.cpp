// Auto-generated module | 2026-05-11T22:45:54.897249
#include <iostream>
#include <vector>

int compute_710() {
    int base = 141;
    int sum = 0;
    for (int i = 0; i < 13; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_710() << std::endl;
    return 0;
}
