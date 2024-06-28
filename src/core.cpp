// Auto-generated module | 2026-05-11T22:44:05.376572
#include <iostream>
#include <vector>

int compute_298() {
    int base = 259;
    int sum = 0;
    for (int i = 0; i < 11; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_298() << std::endl;
    return 0;
}
