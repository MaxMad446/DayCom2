// Auto-generated module | 2026-05-11T22:46:04.353876
#include <iostream>
#include <vector>

int compute_505() {
    int base = 229;
    int sum = 0;
    for (int i = 0; i < 8; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_505() << std::endl;
    return 0;
}
